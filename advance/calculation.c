#include<stdio.h>
int main(){
    int amt;
    printf("enter a amount");
    scanf("%d",amt);
            printf("10*%d;amt/10");
        amt=amt%10;
         printf("5*%d;amt/5");
        amt=amt%5;
     printf("1*%d;amt/1");
        amt=amt%1;
        return 0;
    }