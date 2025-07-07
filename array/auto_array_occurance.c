#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[100], i, n, key, cnt=0;
    fp=fopen("number.txt","r");
    printf("enter count of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
         fscanf(fp,"%d",&a[i]);
         printf("%d ",a[i]);
    }
    printf("\nEnter key:");
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