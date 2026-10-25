#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define INTERVALS_PER_YEAR 35040LL
#define WATT_HOURS_PER_KWH 1000LL

typedef struct {
    long long base_paise_per_kwh;
    long long peak_multiplier_percent;
    long long fixed_charge_paise;
} Tariff;

static int load_tariff(const char *path, Tariff *t)
{
    FILE *fp = fopen(path, "r");
    if (!fp) return 0;
    char key[64];
    long long value;
    int count = 0;
    while (fscanf(fp, " %63[^=]=%lld", key, &value) == 2) {
        if (strcmp(key, "base_paise_per_kwh") == 0) {
            t->base_paise_per_kwh = value; count++;
        } else if (strcmp(key, "peak_multiplier_percent") == 0) {
            t->peak_multiplier_percent = value; count++;
        } else if (strcmp(key, "fixed_charge_paise") == 0) {
            t->fixed_charge_paise = value; count++;
        } else {
            fclose(fp); return 0;
        }
    }
    fclose(fp);
    return count == 3 && t->base_paise_per_kwh >= 0 &&
           t->peak_multiplier_percent >= 100 && t->fixed_charge_paise >= 0;
}

static long long energy_charge_paise(long long wh, int peak, const Tariff *t)
{
    /* Integer arithmetic; a production design should define a rounding policy
       for sub-paise fractions and check multiplication overflow. */
    long long numerator = wh * t->base_paise_per_kwh;
    if (peak) numerator = numerator * t->peak_multiplier_percent / 100LL;
    return numerator / WATT_HOURS_PER_KWH;
}

int main(void)
{
    Tariff t = {0, 0, 0};
    if (!load_tariff("tariff.txt", &t)) {
        puts("Could not read valid tariff.txt");
        return 1;
    }

    long long total_wh = 0, total_paise = t.fixed_charge_paise;
    int intervals;
    printf("Number of 15-minute intervals to enter: ");
    if (scanf("%d", &intervals) != 1 || intervals < 0 ||
        intervals > INTERVALS_PER_YEAR) {
        puts("Invalid interval count.");
        return 1;
    }

    for (int i = 0; i < intervals; ++i) {
        long long wh;
        int peak;
        printf("Interval %d: watt-hours and peak flag (0/1): ", i + 1);
        if (scanf("%lld %d", &wh, &peak) != 2 || wh < 0 ||
            (peak != 0 && peak != 1)) {
            puts("Invalid interval data.");
            return 1;
        }
        total_wh += wh;
        total_paise += energy_charge_paise(wh, peak, &t);
    }

    printf("Total watt-hours: %lld\n", total_wh);
    printf("Energy: %lld.%02lld rupees\n", total_paise / 100,
           total_paise % 100);
    printf("Peak rule: intervals flagged peak are charged at %lld%% of base rate.\n",
           t.peak_multiplier_percent);
    return 0;
}
