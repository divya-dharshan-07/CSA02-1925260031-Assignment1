#include <stdio.h>

int main(void)
{
    const int n = 4000;
    const double rupees_per_bill = 162.50;
    float float_total = 0.0f;
    long long paise_total = 0;
    for (int i = 0; i < n; ++i) {
        float_total += (float)rupees_per_bill;
        paise_total += 16250LL;
    }
    printf("Bills: %d\n", n);
    printf("float total: %.2f rupees\n", float_total);
    printf("integer-paise total: %lld paise = %lld.%02lld rupees\n",
           paise_total, paise_total / 100, paise_total % 100);
    printf("sizeof(float)=%zu, sizeof(long long)=%zu\n",
           sizeof(float), sizeof(long long));
    return 0;
}
