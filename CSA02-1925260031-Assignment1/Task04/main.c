#include <stdio.h>

#define RUPEES_TO_PAISE(r) ((long)(r) * 100L)
#define SQUARE(x) ((x) * (x))
#define MAX_VALUE(a, b) ((a) > (b) ? (a) : (b))

static inline long square_long(long x) { return x * x; }
static inline int max_int(int a, int b) { return a > b ? a : b; }

int main(void)
{
    int a = 3, b = 5;
    printf("Rs 12 in paise = %ld\n", RUPEES_TO_PAISE(12));
    printf("SQUARE(a + 1) = %d\n", SQUARE(a + 1));
    printf("MAX_VALUE(a, b) = %d\n", MAX_VALUE(a, b));
    printf("inline square(4) = %ld\n", square_long(4));
    printf("inline max(3, 5) = %d\n", max_int(a, b));
    return 0;
}
