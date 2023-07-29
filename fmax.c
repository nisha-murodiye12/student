#include <stdio.h>
int main()
{
 int a,b,c,d;
 int largest;
 
 printf("enter the number a,b,c,d:");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>=b && a>=c && a>=d)
    largest=a;
 if(b>=a && b>=c && b>=d)
    largest=b;
 if(c>=a && c>=b && c>=d)
    largest=c;
 else
    largest=d;
  {
    printf("largest %d",largest);
  }
  return 0;
}
