#include <stdio.h>
int main()
{
    int key, flag, a[100], n, i;
    printf("enter length of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter number to find:");
    scanf("%d", &key);
    flag = 0;
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("found");
    else
        printf("not found");
    return 0;
}