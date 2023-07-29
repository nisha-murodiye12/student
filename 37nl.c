#include <stdio.h>
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
   printf("* ");
  }
  printf("\n");
   
    for(int j=1; j<=n-2; j++){
    printf("*");
    for (int k=1; k<=2*n-3; k++){
   printf(" ");
   }
   printf("*\n");
   }
   for(int i=1; i<=n; i++){
   printf("* ");
  }
  printf("\n");
 
  return 0;
   }
   
  
  
  
  
  
  
