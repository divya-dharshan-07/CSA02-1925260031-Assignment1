#include <stdio.h>

int main(void)
{
    long previous, current;
    printf("Enter previous and current readings (0..65535): ");
    if (scanf("%ld %ld", &previous, &current) != 2) {
        puts("Invalid input: enter two integer readings.");
        return 1;
    }
    if (previous < 0 || previous > 65535 || current < 0 || current > 65535) {
        puts("Invalid input: readings must be in 0..65535.");
        return 1;
    }
    unsigned long units = current >= previous
        ? (unsigned long)(current - previous)
        : (unsigned long)(65536L - previous + current);
    printf("Units consumed: %lu\n", units);
    return 0;
}
