#include <stdio.h>
int main()
{
 int n;
 printf("enter the number");
 scanf("%d",&n);
 for(int i=n; i>=1; i--){
 for(int j=1; j<i; j++)
 {
   printf("%d",j);
   printf("*");
   }
   printf("%d",i);
  printf("\n");
 }
 return 0;
}
  
 
