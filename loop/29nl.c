#include <stdio.h>
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
  for(int j=1; j<=i; j++)
  {
    printf("%d",j);
  }
  for(int k=i; 1<=k; k--)
  {
    printf("%d",k);
   }
   printf("\n");
  }
  return 0;
}
  
