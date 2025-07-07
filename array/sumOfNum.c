#include <stdio.h>
int main()
{
    int a[100], sum = 0, n, i;
    printf("enter total number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        //  printf("Given data is\n");
        sum = sum + a[i];
    }
    printf("sum of num:%d", sum);
    return 0;
}