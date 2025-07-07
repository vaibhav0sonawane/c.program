#include <stdio.h>
int main()
{
    int j, a[100], n, i;
    printf("enter length of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("after sorting array");
    for (i = 0; i < n; i++)
    {
        printf("\n %d ", a[i]);
    }
    return 0;
}