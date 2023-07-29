#include <stdio.h>
int main()
{
  int i,n;
  printf("enter the number:");
  scanf("%d",&n);
  int a[n];
  printf("enter arry element:\n");
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
    }
  printf("\n");
 for(i=n; i>=0; i--)
 {
   printf(" reverse:%d\n",a[i]);
  }
  return 0;
 }

  
