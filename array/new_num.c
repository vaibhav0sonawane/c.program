#include <stdio.h>
int main()
{
    int a[100], i, n, key, pos;
    printf("Enter array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter number to be inserted:");
    scanf("%d", &key);
    printf("enter position of number:");
    scanf("%d", &pos);
    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = key;
    n++;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
