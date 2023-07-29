#include <stdio.h>
int main()
{
 int n;
 printf("enter the number");
 scanf("%d",&n);
 for(int i=1; i<=n; i++){
  int  k=n*2;
 for(int j=1; j<=i; j++){
 

  while(j<=i){
   k=k-2;
   j++;
   }
    printf("%d\n",k);
   }}
    return 0;
 } 
