#include <stdio.h>
int main()
{
  int i,n;
  printf("enter the number:");
  scanf("%d",&n);
  int a[n];
  printf("enter the element:\n");
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
   }
  printf("\n");
 for(i=0; i<n; i++)
 {
   if(a[i]>=0 && a[i]%2==1)
  {
    printf("odd number: %d\n",a[i]);
   }
   }
   printf("\n");
  return 0;
}
