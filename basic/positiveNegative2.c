#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    (n<0)?printf("the number is -ve"):printf("the number is +ve");
    return 0;
}