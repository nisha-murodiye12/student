#include <stdio.h>
int main()
{
  int n, i;
  printf("enter the number:");
  scanf("%d", &n);
  int a[n];
  printf("enter the element:");
  for (i = 0; i < n; i++) 
  {
    scanf("%d", &a[i]);
  }
  printf("\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}







