#include <stdio.h>
int main()
{
  int unit;
  int surcharge;
  int amt;
  int total;
  printf("enter the number");
  scanf("%d",&unit);
  if(unit<=50)
   {
     amt=unit*0.50;
     }
    else if(unit<=100)
    {
      amt=25+(unit-50)*0.75;
      }
    else if(unit>=100)
    {
     amt+00+(unit-150)*1.20;
     }
    if(unit>=250)
    {
      amt=220+unit-250*1.50;
     }
     else
     {
       printf("%d",invalid);     }
     surcharge=amt*0.20;
     total=amt+surcharge;
    printf("%d",total);
   return 0;
}
    
