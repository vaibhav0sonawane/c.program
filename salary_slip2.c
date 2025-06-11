#include<stdio.h>
int main(){
    float bs,totalsalary,da,hra,tax;
    int eid;
    char ename;
    FILE *fp;
    fp=fopen("salary_slip2.txt","w");
    printf("enter emp details:");
    printf("\n ID:");
    scanf("%d",&eid);
    printf("name:");
    scanf("%s",&ename);
    printf("base salary:");
    scanf("%f",&bs);
    printf("DA(%%):");
    scanf("%2f",&da);
    printf("HRA(%%):");
    scanf("%2f",&hra);
    printf("tax(%%):");
    scanf("%2f",&tax);

    totalsalary=bs+((bs*(da=hra-tax))/100);
    
    fprintf(fp,"\n \t---------------Employee salary-----------");
    fprintf(fp,"\n \tID                        :%d",eid);
    fprintf(fp,"\n \tname                      :%s",ename);
    fprintf(fp,"\n \tBasic salary              :%f",bs);
    fprintf(fp,"\n \tda(%%)                    :%2f",da);
    fprintf(fp,"\n \thra(%%)                   :%2f",hra);
    fprintf(fp,"\n \ttax(%%)                   :%2f",tax);
    return 0;
}