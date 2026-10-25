/*
Task 1: Problem analysis companion program.
Illustrates consumption for a non-rollover example.
*/
#include <stdio.h>

int main(void)
{
    unsigned int previous = 1200U;
    unsigned int current = 1350U;
    if (current < previous) {
        puts("Invalid readings or rollover requires special handling.");
        return 1;
    }
    printf("Previous reading: %u\n", previous);
    printf("Current reading: %u\n", current);
    printf("Units consumed: %u\n", current - previous);
    return 0;
}
