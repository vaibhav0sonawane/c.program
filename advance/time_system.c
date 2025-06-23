#include<stdio.h>
int main(){
    int h,m,s;
    printf("enter hours:");
    scanf("%d",&h);
    printf("enter min:");
    scanf("%d",&m);
    printf("enter sec:");
    scanf("%d",&s);
if(h>=0&& h<=24){
    if(m>=0 && m<=60){
        if(s>=0 && s<=60)
        printf("Time is valid");
        else
        printf("Second are invalid");
    }
    else
    printf("min is invalid");
}
else
printf("hours is invalid");
return 0;
}