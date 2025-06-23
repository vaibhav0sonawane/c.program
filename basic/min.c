#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number:");
    scanf("%d", &a, &b);
    if (a < b)
        printf("A is max ");
    else
        printf("B is min ");
    return 0;
}