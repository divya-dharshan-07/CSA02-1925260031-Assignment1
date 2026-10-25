#include "billing.h"

long compute_bill(int units)
{
    if (units < 0) return -1L;
    long total = FIXED_CHARGE_PAISE;
    if (units > 100) {
        int n = units < 200 ? units - 100 : 100;
        total += (long)n * RATE2_PAISE;
    }
    if (units > 200) total += (long)(units - 200) * RATE3_PAISE;
    return total;
}
