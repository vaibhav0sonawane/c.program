#include <stdio.h>
int main()
{
    int a[100], i,j, n, key, pos;
    printf("Enter array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter number to be deleted:");
    scanf("%d", &key);
     for(i=0;i<n;i++)
    {
       if(a[i]==key){
         for(j=i;j<n-1;j++)
         a[j]=a[j+1];+
         n--;
         break;
       }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
return 0;
}