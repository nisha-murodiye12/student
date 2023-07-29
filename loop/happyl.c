#include <stdio.h>
int main()
{
 int n,r,s,m,p;
 printf("enter the number");
 scanf("%d",&n);
 int k=n;
 while(n>1){
 r=n%10;
 s=r*r;
 m=n/10;
 p=m*m;
 n=s+p;
 }
 if(n==1)
 {
   printf("%d is happy number",k);
  }
  else
  {
    printf("%d is not happy number",k);
  }
  return 0;
}
