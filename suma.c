#include <stdio.h>
int main()
{
 int i,n;
 printf("enter the number:");
 scanf("%d",&n);
 int a[n],sum=0;
 printf("enter array element:\n");
 for(i=0; i<n; i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\n");
 for(i=0; i<n; i++)
 {
   sum=sum+a[i];
   }
   printf("all sum: %d",sum);
   return 0;
}
