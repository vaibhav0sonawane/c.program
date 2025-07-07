// array itself is a pointer
// array is a countinuous memory allocation(40,80,120)
// array is collection of data
// syntax (int a[100]) where int-Data type,a-array name,[100]-size
// we can access data randomly
// lower band and upper band is 0 and n-1
// using array we can achieve call by referance
// only positive and zeo allowed for number indexing
// only integers are allowed
#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("how many element you want to enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Given data is\n");
    for (i = 0; i < n; i++)
        printf("\n %d: ", a[i]);
    return 0;
}