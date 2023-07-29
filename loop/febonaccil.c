#include <stdio.h>
int main()
{
  int n;
  int a=0;
  int b=1;
  int c=1;
  int i=1;
  scanf("%d",&n);
  while(i<=n){
   {
     printf("%d\n", a);
    }
    c=a+b;
    a=b;
    b=c;
  i=i+1;
  }
  return 0;
}
   
