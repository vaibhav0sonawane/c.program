// WAP find all Odd  number 1 to n 
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0)
        printf("number Odd:%d\n",i);
    }
    return 0;
}