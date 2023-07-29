#include <stdio.h>
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  int k,max,min;
  printf("enter the element 1:");
  scanf("%d",&k);
  max=min=k;
  for(int i=2; i<=n; i++){
   printf("enter the element %d:",i);
  scanf("%d",&k);
if(k>max){
  max=k;
  }
  if(k<min){
    min=k;
    }
    }
  printf("maximum value: %d\n",max);
  printf("minimum value: %d\n",min);
  
 return 0;
 }
 
