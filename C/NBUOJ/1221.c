#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            putchar(' ');
        for (int k = 1; k <= 2 * i - 1; k++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}