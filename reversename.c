#include <stdio.h>
int main()
{
  int n, i; 
  printf("enter the number:");
  scanf("%d", &n); 
  char a[n][100];
  printf("enter the name:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%s", a[i]);
  }
  printf("name \n");
  for (i = n - 1; i >= 0; i--)  
  { 
    printf("%s\n", a[i]);
  }
  return 0;
}

    
    
  
  
