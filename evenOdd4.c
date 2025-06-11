// write a program for if a number is even (factor)
#include<stdio.h>
int main(){
int n;
printf("ENTER A NUMBER:");
scanf("%d",&n);
printf("%s number",(n%2==0)?"even":"odd");
return 0;
}