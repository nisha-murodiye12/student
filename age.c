#include <stdio.h>
int main()
{ 
  int age;
  printf("enter the age");
  scanf("%d",&age);
  if(age>18)
  {
    printf("age is eligible");
  }
  else
  {
  printf("age is not eligible");
  }
  return 0;
}
