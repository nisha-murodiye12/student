#include <stdio.h>
int main()
{
  int n;
  int m;
  int s;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
  for(int j=n; j>=i; j--)
  {
    printf("%d",j);
  }
  for(int k=1; k<i*2-1; k++)
  {
    printf(" ");
  }
  for(int s=i; s<=n; s++)
  {
    printf("%d",s);
   }
  printf("\n");
  }
  return 0; 
}
  
