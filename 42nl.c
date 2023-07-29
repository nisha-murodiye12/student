#include <stdio.h>
int main()
{
 int n;
 printf("enter the number");
 scanf("%d",&n);
 for(int i=n; i>=1; i--){
for(int j=1; j<i; j++)
{
  printf(" ");
 }
for(int k=n; k>=i; k--)
{
  printf("❤️ ");
 }
for(int j=1; j<i; j++)
{
  printf("  ");
 }
 for(int k=n; k>=i; k--)
{
  printf("❤️ ");
 }
 printf("\n");
 }
for(int i=1; i<n*2; i++){
for(int j=1; j<=i; j++)
   {
        printf(" ");
  }
      for(int k=n*2; k>i; k--)
  {
       printf("❤️ ");
    }
    printf("\n");
    }
   
     return 0;
}

