#include <stdio.h>
int main()
{
 int n;
 int sum=0;
 int i;
 printf("enter the number");
 scanf("%d",&n);
 i=n;
 while(n>0){
    int r=n%10;
    sum=sum+r*r*r;
    n=n/10;
   }
   if(sum==i)
   {
     printf("%d number is armstrong",i);
    }
    else
    {
      printf("%d number is not armstrong",i);
    }
  return 0;
}
 
 
