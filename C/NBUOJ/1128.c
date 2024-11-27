#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            n /= i;
            i = 1;
            if (n != 1)
                putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}