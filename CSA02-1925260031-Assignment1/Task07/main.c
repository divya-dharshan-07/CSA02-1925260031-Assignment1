#include <stdio.h>

int main(void)
{
    printf("Integer division 5/2 = %d (fraction discarded)\n", 5 / 2);
    printf("Floating division 5.0/2 = %.2f\n", 5.0 / 2);
    printf("Cast after division (double)(5/2) = %.2f\n", (double)(5 / 2));
    printf("Cast before division (double)5/2 = %.2f\n", (double)5 / 2);
    printf("0.1 + 0.2 in double = %.17f\n", 0.1 + 0.2);
    return 0;
}
