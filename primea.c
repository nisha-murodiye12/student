#include <stdio.h>
int main()
{
 int i,j,n;
 printf("enter the number:");
 scanf("%d",&n);
 int a[n];
 printf("enter the element:\n");
 for(int i=0; i<n; i++)
 {
   scanf("%d",&a[i]);
   }
 printf("\n");
 for(int i=0; i<n; i++)
 {
   int c=0;
  if(a[i]>=1){
   for(j=2; j<a[i]; j++)
  if(a[i]%j==0){
  
    c++;
    }
    }
    if(c==2)
  {
    printf("prime number: %d\n",a[i]);
   }}
  return 0;
  }
  
 
 
 

