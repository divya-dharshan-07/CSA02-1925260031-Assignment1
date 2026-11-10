
#include <stdio.h>
#include "billing.h"

long compute_bill(int units)
{
    if (units < 0)
        return -1L;

    long total = FIXED_CHARGE_PAISE;
    long energy_charge = 0L;

    /* Calculate the first slab */
    int slab1 = units < SLAB1_UNITS
                    ? units : SLAB1_UNITS;

    energy_charge += (long)slab1 * RATE1_PAISE;

    /* Calculate the second slab */
    if (units > SLAB1_UNITS) {
        int slab2 = units < SLAB2_UNITS
                        ? units - SLAB1_UNITS
                        : SLAB2_UNITS - SLAB1_UNITS;

        energy_charge += (long)slab2 * RATE2_PAISE;
    }

    /* Calculate the third slab */
    if (units > SLAB2_UNITS) {
        energy_charge +=
            (long)(units - SLAB2_UNITS) * RATE3_PAISE;
    }

    total += energy_charge;

#ifdef DEBUG
    printf("[DEBUG] Units = %d\n", units);
    printf("[DEBUG] Energy charge = %ld paise\n", energy_charge);
    printf("[DEBUG] Fixed charge = %ld paise\n",
           (long)FIXED_CHARGE_PAISE);
    printf("[DEBUG] Total = %ld paise\n", total);
#endif

    return total;
}
