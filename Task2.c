#include <stdio.h>
int main()
{
    int n, digit, even = 0, odd = 0, zero = 0;
    printf("ENter a number:");
    scanf("%d",&n);
    while (n != 0)
    {
        digit = n % 10;
        if (digit == 0)
            zero++;
        else if (digit % 2 == 0)
            even++;
        else
            odd++;
        n = n / 10;
    }
    printf("\n Even number:%d", even);
    printf("\n Odd number:%d", odd);
    printf("\n Zero number:%d", zero);
    return 0;
}