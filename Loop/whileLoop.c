#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        printf("%d.Hello World\n", i);
        i++;
    }
    return 0;
}