#include <stdio.h>
int main()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  for(int i=2; i<=n; i++){
  int c=0;
  for(int j=1; j<=i; j++){
  if(i%j==0)
  {
    c=c+1;
    }}
  if(c>2)
  {
    printf("composite number: %d\n",i);
    }
    }
    return 0;
  }
  
