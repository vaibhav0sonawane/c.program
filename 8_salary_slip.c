#include <stdio.h>
int main()
{
    float id, bs, hr = 10, da = 30, tax = 5, ts;
    // bs=base salary,hr=house rent,
    // da=dearness allowance,ts=total in hand salary
    char ename;
    int eid;
    printf("Enter employee ID:");
    scanf("%s", &ename);
    printf("Enter employee name:");
    scanf("%d", &id);
    printf("Enter employee base salary:");
    scanf("%f", &bs);
    ts=bs+(bs*(hr+da-tax)/100);
    printf("total salary of employee=%d",ts);
    return 0;
}