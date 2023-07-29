#include <stdio.h>
int main()
{
 int n;
 printf("enter the number");
 scanf("%d",&n);
 for(int i=1; i<=n; i++){
 for(int j=n; j>i; j--)
 {
  printf(" ");
  }
 for(int m=1; m<=i; m++)
 {
  printf("*");
 }
 printf("\n");
 }
 for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--)
         {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) 
        {
            printf("*");
        }
        printf("\n");
  }
 return 0;
}
