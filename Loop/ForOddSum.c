// calculate sum of all odd number 1 to n
#include<stdio.h>
int main(){
    int num=0,i,n;
    printf("Enter a num:",n);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        (i%2!=0);
        num=num+i;
    }
    printf("sum of odd num=%d",num);
    return 0;
}