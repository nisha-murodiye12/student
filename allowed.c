#include <stdio.h>
int main()
{
  int numberclass,percentageclass,c;
  printf("enter the number numberclass,percentegeclass;");
  scanf("%d%d",&numberclass,&percentageclass);
  c=numberclass/percentageclass*100;
  if(c>=75)
  {
    printf("student allowed sit in the exam");
  }
  else
  {
   printf("student not allowed sit in the exam");
  }
  return 0;
}
