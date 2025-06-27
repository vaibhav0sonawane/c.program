#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    // for(i=2;i<=n;i+=2)
    for(i=1;i<=n;i++){
        if(i%2==0)
        printf("Even numbers:%d\n",i);
    }
    return 0;
}
