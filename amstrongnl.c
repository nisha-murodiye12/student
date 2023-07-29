#include <stdio.h>

int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    int j = i;
    int sum = 0;
    int r;

    while (j > 0) {
      r = j % 10;
      sum = sum + r * r * r;
      j = j / 10;
    }

    if (sum == i) {
      printf("Armstrong number: %d\n", i);
    }
  }

  return 0;
}
    
