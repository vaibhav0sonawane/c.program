#include <stdio.h>
int main()
{
    char ch;
    printf("enter anything:");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("alphabet");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special symbols");
    return 0;
}