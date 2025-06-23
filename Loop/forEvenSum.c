// calculate sum of all even number 1 to n
#include <stdio.h>
int main()
{
    int i, n,num=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <=n;i++)
    {
        if (i % 2 == 0)
          num=num+i;
    }
      printf("sum of num:%d", num);
    return 0;
}