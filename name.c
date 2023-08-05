#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    char a[n][100];
    printf("Enter the names:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    printf("Names:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", a[i]);
    }

    return 0;
}







