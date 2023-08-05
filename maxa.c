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
   printf("\n");
   int  max=a[0];
  for(i=0; i<n; i++)
  { 
    if(a[i]>0)
  {
    if(a[i]>max)
    {
      max=a[i];
    }
    }
    }
  printf("max: %d\n",max);
  return 0;
  }
