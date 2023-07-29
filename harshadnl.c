#include <stdio.h>
int main()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
  int sum=0;
  for(int j=i; j>0; j=j/10){
  int r=j%10;
  sum=sum+r;
  }
  if(i%sum==0)
  {
    printf("harshad number: %d\n",i);
   }
  }
  return 0;
}
