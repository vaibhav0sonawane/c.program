#include <stdio.h>
int main()
{
  int a[100], min, n, i;
  printf("enter total number:");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
  {
    if (min > a[i])
      min = a[i];
  }
  printf("min number %d", min);
  return 0;
}