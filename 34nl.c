#include <stdio.h>
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
  for(int j=1; j<=i; j++)
  {
    printf("*");
   }
   printf("\n");
   }
  for(int s=n; s>=1; s--){
  for(int k=1; k<s; k++)
  {
    printf("*");
   }
   printf("\n");
 }
 return 0;
}
  
  
