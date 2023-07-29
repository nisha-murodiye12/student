#include <stdio.h>
int main()
{
  int a,b,c,d,e;
  printf("enter the number a,b,c,d,e:");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  int largest;
  int slargest; 
   if(a>=b)
   {
     largest=a;
     slargest=b;
    }
    else
    { 
      largest=b;
      slargest=a;
    }
   if(c>=largest)
    {
      slargest=largest;
      largest=c;
     }
     else if(c>=slargest)
     {
       slargest=c;
     }
   if(d>=largest)
   {
     slargest=largest;
     largest=d;
   }
   else if(d>=slargest)
   {
     slargest=d;
   }
   if(e>=largest)
   {   
    slargest=largest;
    largest=e;
   }
   else if(e>=slargest)
   {
     slargest=e;
   }
   
   printf("the second number %d",slargest);
    return 0;
}
