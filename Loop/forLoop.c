#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
        printf("%d.Hello World\n", i);

    return 0;
}
