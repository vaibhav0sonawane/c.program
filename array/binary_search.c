// array must always be in sorting order
#include <stdio.h>
int main()
{
    int j, a[100], n, flag, low, high, mid, key, i;
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
    printf("\nenter key:");
    scanf("%d", &key);
    flag = 0;
    high = n - 1;
    low = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (a[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (flag == 1)
        printf("Found");
    else
        printf("Not Found");
    return 0;
}