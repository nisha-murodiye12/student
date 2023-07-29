#include <stdio.h>
int main()
{
 int n;
 printf("enter the number:");
 scanf("%d",&n);
 for(int i=2; i<=n; i++){
 int c=1;
 for(int j=2; j<=i; j++){
 if(i%j==0)
 {
 c++;
 }
 }
  if(c==2)
  {
   printf("prime number: %d\n",i);
   }
   }
   return 0;
 }
   
