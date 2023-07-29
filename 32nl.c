#include <stdio.h>
int main() 
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  for (int i=0; i<=n; i++){
  for (int j=i; j>=1; j--)
  {  
    printf("%d",j);
    }
  {
    printf("0");
  }
  for(int s=1; s<=i; s++)
  {
    printf("%d",s);
   }
   printf("\n");
   }
   return 0;
 }
   
