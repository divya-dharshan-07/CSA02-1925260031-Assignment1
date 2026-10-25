#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

#define MAX_READING 65535L
#define METER_MODULUS 65536L
#define FIXED_PAISE 5000L
#define RATE2 225L
#define RATE3 450L

static int parse_reading(const char *prompt, long *out)
{
    char buf[128], extra;
    printf("%s", prompt);
    if (!fgets(buf, sizeof buf, stdin)) return 0;
    errno = 0;
    if (sscanf(buf, " %ld %c", out, &extra) != 1 || errno == ERANGE)
        return 0;
    return *out >= 0 && *out <= MAX_READING;
}

static long bill_paise(unsigned long units)
{
    long total = FIXED_PAISE;
    if (units > 100UL) {
        unsigned long n = units < 200UL ? units - 100UL : 100UL;
        total += (long)n * RATE2;
    }
    if (units > 200UL) total += (long)(units - 200UL) * RATE3;
    return total;
}

int main(void)
{
    long prev, curr;
    if (!parse_reading("Previous reading (0..65535): ", &prev) ||
        !parse_reading("Current reading (0..65535): ", &curr)) {
        puts("Invalid input. Enter integer readings from 0 to 65535.");
        return 1;
    }

    unsigned long units;
    if (curr >= prev) {
        units = (unsigned long)(curr - prev);
    } else if (prev >= 60000L && curr <= 5535L) {
        units = (unsigned long)(METER_MODULUS - prev + curr);
    } else {
        puts("Invalid: current reading is lower without a plausible rollover.");
        return 1;
    }

    long p = bill_paise(units);
    printf("Units consumed: %lu\n", units);
    printf("Energy charge: Rs %ld.%02ld\n", (p - FIXED_PAISE) / 100,
           (p - FIXED_PAISE) % 100);
    printf("Fixed charge: Rs %ld.%02ld\n", FIXED_PAISE / 100, FIXED_PAISE % 100);
    printf("Total bill: Rs %ld.%02ld\n", p / 100, p % 100);
    return 0;
}
