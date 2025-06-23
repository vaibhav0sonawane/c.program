#include<stdio.h>
int main(){
    int roll_no;
    char name[100],s1[100],s2[100],s3[100];
    float m1,m2,m3,m4,total,avg;
    char grade;
   printf("Enter student details:\n");
   printf("roll no.s:");
   scanf("%d",&roll_no);
   printf("name:");
   scanf("%s",&name);
   printf("subject 1:");
   scanf("%s",&s1);
   printf("subject 2:");
   scanf("%s",&s2);
   printf("subject 3:");
   scanf("%s",&s3);
   printf("marks 1:");
   scanf("%f",&m1);
   printf("marks 2:");
   scanf("%f",&m2);
   printf("marks 3:");
   scanf("%f",&m3);
   total=m1+m2+m3;
   avg=total/3;
   if(avg<=100 && avg>=90)
     grade='A';
   else if(avg<90 && avg>=80)
     grade='B' ;
   else if(avg<80 && avg>=70)
     grade='c' ;
   else if(avg<70 && avg>=50)
     grade='D';
   else if(avg<50 && avg>=35)
     grade='E';
   else
     grade='F';
   printf("roll no:%d",roll_no);
   printf("\n Name:%d",name);
   printf("\nsubject1:%s",s1);
   printf("\nsubject2:%s",s2);
   printf("\nsubject3:%s",s3);
   printf("\nmarks1:%f",m1);
   printf("\nmarks2:%f",m2);
   printf("\nmarks3:%f",m3);
   printf("\ntotal:%f",total);
   printf("\navg:%f",avg);
   printf("\ngrade:%c",grade);
   
   return 0;
}