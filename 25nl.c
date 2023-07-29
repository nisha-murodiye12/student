#include <stdio.h>
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=n; i>0; i--){
  for(int j=1; j<=i; j++)
  {
    printf("*");
   }
   printf("\n");
  
  for(int c=1; c>=n; c++)
  for(int k=1; k<=c; k++)
  {
    printf("*");
   }
   printf(" ");
  
  }
   return 0;
}
