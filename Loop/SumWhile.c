#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("sum of %d number is:%d", n,sum);
    return 0;
}




