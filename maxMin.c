#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number:");
    scanf("%d",&a,&b);
    if(a<b)
    printf("B is max ");
    else
    printf("A is min ");
    return 0;
}