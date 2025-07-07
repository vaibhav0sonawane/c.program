#include <stdio.h>
int main()
{
    int a[100], i, n, key, cnt;
    printf("Enter array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter key:");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            cnt++;
    }
    if (cnt == 0)
        printf("Not Found");
    else
        printf("count is %d", cnt);
    return 0;
}