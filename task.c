#include<stdio.h>
int main(){
    int i,n,cnt=0,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("factor of number:");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
            cnt++;
        }
        
    }
    printf("\nSum of factorial:%d",sum);
    printf("\ncount of number:%d",cnt);
   return 0;
}