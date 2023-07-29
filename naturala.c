#include <stdio.h>
int main()
{
  int i,j,n;
  printf("enter the number:");
  scanf("%d",&n);
  int  a[n];
  printf("enter the element:\n");
 for(i=0; i<n; i++)
 {
   scanf("%d",&a[i]);
  }
  printf("\n");
  printf("natura;l number in the array:");
 for(i=0; i<n; i++)
 {
  if(a[i]>0)
  {
    printf("%d\n",a[i]);
   }
   }
   printf("\n");
  return 0;
 }
