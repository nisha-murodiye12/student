#include <stdio.h>
int main()
{
 int n;
 printf("enter the number:");
 scanf("%d",&n);
 int sum=0; 
 for(int i=1; i<=n; i++){
 int p=1;
 for(int j=i; j>=1; j--){
 p=p*j;
 }
 sum=sum+p;
 }
  printf("%d\n",sum);
   return 0;
}
