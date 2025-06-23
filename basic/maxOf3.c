#include<stdio.h>
int  main(){
    int a,b,c;
    printf("Enter three no.s:");
    scanf("%d""%d""%d",&a,&b,&c);
    if(a>b)
    b=a;
    if(c>b)
    b=c;
    printf("max no.s is:%d",b);
    return 0;
}