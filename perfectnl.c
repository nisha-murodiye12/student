#include <stdio.h>
int main()
{
  int n;
  printf("enter the number: ");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
  int sum=0;
  for(int j=1; j<i; j++){
  if(i%j==0)
  {
  sum=sum+j;
  }
  }
  if(i==sum)
  {
    printf("perfect number: %d\n",i);
   }
   }
   return 0;
}
  
