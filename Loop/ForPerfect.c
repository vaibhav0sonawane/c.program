#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("ENter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i; // sum=sum+i;
            // sum of factor of number=perfect number
    }
    if (sum == n)
        printf("perfect Number");
    else
        printf("not a perfect number");
    return 0;
}
// two perfect numbers 6 & 28
// WAP to find armstrong number,digit count,digit seperation