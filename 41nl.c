#include <stdio.h>
int main()
{ 
  int n;
  int i;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
   printf("*");
  for(int j=1; j<i; j++)
  {
   printf(" ");
   }
   printf("*\n");
   }
 for(int k=1; k<n; k++){
  printf("* ");
  }
   return 0;
   }
   

