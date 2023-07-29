#include <stdio.h>
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
  for(int c=1;  c<=i; c+=2){
  for(int j=1;  j<=i; j++)
  {
    printf("%d",c);
  }
  }
  printf("\n");
 }
 return 0;
 }
