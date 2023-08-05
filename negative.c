#include <stdio.h>
int main()
{
 int n,i;
 printf("enter the number:");
 scanf("%d",&n);
 int a[n];
 printf("enter the element:\n");
 for(i=0; i<n; i++)
 {
   scanf("%d",&a[i]);
   }
  printf("negetive element:\n");
 for(i=0; i<n; i++)
 {
   if(a[i]<0)
   {
   printf("%d\n",a[i]);
  }
  }
  printf("positive element:\n");
 for(i=0; i<n; i++)
 {
   if(a[i]>0)
  {
    printf("%d\n",a[i]);
  }
  }
  return 0;
 }
