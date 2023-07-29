#include <stdio.h>
int main()
{
  int a[5];
  printf("enter array element:");
  for(int i=0; i<5; i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n ");
  for(int i=0; i<5; i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
 }
