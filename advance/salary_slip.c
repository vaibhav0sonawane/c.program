#include<stdio.h>
int main(){
    float amt,bs,da,ta,hra,ts;
    printf("Enter base salary:");
    scanf("%f",&bs);
    printf("Enter salary:");
    scanf("%f",&amt);
     printf("Enter total tax:");
    scanf("%f",&ta);
     printf("Enter total HRA:");
    scanf("%f",&hra);
     printf("Enter total da:");
    scanf("%f",&da);
     ts=amt+(bs*(da+hra-ta)/100);
      printf("total salary=%f",ts);
    return 0;
}