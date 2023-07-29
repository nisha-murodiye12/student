#include <stdio.h>
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=n; i>=1; i--){
  for(int j=i; j>=i; j++)
  {
    
    printf("j*";");
  }
  for(int k=i; k>=1; k--)
  {
    printf("*");
    printf(" ");
   }
   printf("\n");
  }
  return 0;
}
  
