#include <stdio.h>
int main()
{
  int a,b,c,d;
  int max1;
  int max2;
  int max3;
  printf("enter the number a,b,c,d:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a>=b)
  {
    max1=a;
    }
    else
    {
      max1=b;
      }
   if(c>=d)
   {
     max2=c;
     }
     else
     {
       max2=d;
      }
    if(max1>=max2)
    {
      max3=max2;
    }
     else
     {
       max3=max1;
       }
    printf("third largest number %d",max3);
    
    return 0;
}
      
  
