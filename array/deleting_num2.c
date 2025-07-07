#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[100], i, n, j, key, cnt = 0;
    fp = fopen("number.txt", "r");
    printf("enter count of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]);
        printf("%d ", a[i]);
    }
    printf("\nenter number to be deleted:");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
         n--;
         i--;  //to delete repeted numbers one after other
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}