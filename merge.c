 #include <stdio.h>
 int main()
 {
   int m,n,i,j,r;
   printf("enter the number m:");
   scanf("%d",&m);
   printf("enter the number n:");
   scanf("%d",&n);
   int a[m];
   int b[n];
   printf("enter the element m:\n");
   for(i=0; i<m; i++)
   {
     scanf("%d",&a[i]);
    }
   printf("enter  the elemnt n:\n");
  for(j=0; j<n; j++)
  {
    scanf("%d",&b[j]);
   }
   printf("merge array \n");
   r=m+n;
   for(i=0; i<m; i++)
   {
     printf("%d",a[i]);
    }
  for(j=0; j<n; j++)
  {
   printf("%d",b[j]);
  }
  return 0;
 }
   
