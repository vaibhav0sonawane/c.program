#include<stdio.h>
int  main(){
    int a,b,c;
    printf("Enter three no.s:");
    scanf("%d""%d""%d",&a,&b,&c);
    b=(a>b)?a:b;
    b=(c>b)?c:b;
    printf("max no.s is:%d",b);
return 0;
}