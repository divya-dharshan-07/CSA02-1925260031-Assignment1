#include <stdio.h>

int main(void)
{
    int slab1, slab2;
    long rate1, rate2, rate3, fixed;
    FILE *fp = fopen("tariff.txt", "r");
    if (!fp) {
        perror("tariff.txt");
        return 1;
    }
    int ok = fscanf(fp, "%d %d %ld %ld %ld %ld",
                    &slab1, &slab2, &rate1, &rate2, &rate3, &fixed);
    fclose(fp);
    if (ok != 6 || slab1 < 0 || slab2 < slab1 ||
        rate1 < 0 || rate2 < 0 || rate3 < 0 || fixed < 0) {
        puts("Invalid tariff configuration.");
        return 1;
    }

    long units;
    printf("Enter units consumed: ");
    if (scanf("%ld", &units) != 1 || units < 0) {
        puts("Invalid units.");
        return 1;
    }
    long total = fixed;
    if (units > slab1) {
        long n = units < slab2 ? units - slab1 : slab2 - slab1;
        total += n * rate2;
    }
    if (units > slab2) total += (units - slab2) * rate3;
    total += (units < slab1 ? units : slab1) * rate1;
    printf("Total: Rs %ld.%02ld\n", total / 100, total % 100);
    return 0;
}
