#include <stdio.h>
int main()
{
    int n,i,j,temp;
    printf("enter the number:");
    scanf("%d",&n);
    int a[n];
    printf("enter the element:\n");
    for(i=0;  i<n; i++)
    {
      scanf("%d",&a[i]); 
    }
      for(i=0; i<n; i++)
    {
       for(j=i+1; j<n; j++)
    {
      if(a[i]<=a[j])
    {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
   }
  }
    printf("\n");
     for(i=0; i<n; i++)
 {
     printf("asending array %d\n",a[i]);
 }
   
      return 0;
}
