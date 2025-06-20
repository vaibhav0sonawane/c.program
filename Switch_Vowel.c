#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    ch= tolower(ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("vowel");
        break;
        default:
        printf("not a Vowel");
        break;
    }
    return 0;
}