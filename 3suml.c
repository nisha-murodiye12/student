#include <stdio.h>
int main()
{ 
  int n;
  int i=1;
  int sum;
  scanf("%d",&n);
  while(i<=n){
  if(i%3==0)
     sum=sum+i;
    i=i+1;}
   {
     printf("%d",sum);
     }
   return 0;
 }
