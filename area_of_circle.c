#include<stdio.h>
int main(){
    float radius,PI=3.14,area;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("area of circle is:%f",area);
    return 0;
}