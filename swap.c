#include <stdio.h>
int main()
{
float a,b,c,d;
scanf("%f",&a);
scanf("%f",&b);
d=(c=a,a=b,b=c);
printf("%f\n",d);
}
