#include <stdio.h>
int main()
{
  int i,n;
 printf("enter the number:");
 scanf("%d",&n);
 int a[n],c=0;
 printf("enter the element:\n");
 for(i=0; i<n; i++)
 {
   scanf("%d",&a[i]);
   }
   printf("\n");
  for(i=0; i<n; i++)
  {
    c=c-a[i];
  }
  printf("%d",c);
  return 0;
 }
