#include <stdio.h>
int main()
{
 int n;
 printf("enter the number:"); 
 scanf("%d",&n);
 printf("Palindrome numbers up to %d:\n", n);

    for (int i = 1; i <= n; i++) {
        int num = i;
        int reversed = 0;

        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }

        if (reversed == i) {
            printf("Palindrome number: %d\n", i);
        }
    }

    return 0;
} 




  
