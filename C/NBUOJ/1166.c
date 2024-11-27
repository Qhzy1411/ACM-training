#include <stdio.h>
int main()
{
    char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            putchar(' ');
        for (j = 0; j <= i; j++)
            printf("%c ", letter[i]);
        putchar('\n');
    }
    return 0;
}