#include <stdio.h>
int main()
{
  int n;
  int i = 2;
  printf("Enter a number: ");
  scanf("%d", &n);
 int isPrime = 1;
  while (i < n) {
    if (n % i == 0){ 
    isprime=0;
    }
    i++;
  }

  if (isPrime == 1) {
    printf("%d is a prime number\n", n);
  } 
  else 
  {
    printf("%d is not a prime number\n", n);
  }

  return 0;
}

