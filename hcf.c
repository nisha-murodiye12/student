#include <stdio.h>
int main()
{
 int n,m;
 printf("enter the number");
 scanf("%d%d",&n,&m);
 int p=m*n;
 int r=m%n;
 if(r==0){
 {
   m=n;
   n=r;
 }
 {
   printf("hcf: %d\n",n);
 }
   printf("lcm: %d\n",p);
  }
 return 0;
 }
