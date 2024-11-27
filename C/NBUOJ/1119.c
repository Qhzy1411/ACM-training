#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == i)
                printf("%d\n", i * j);
            else
                printf("%-4d", i * j);
        }
    }
    return 0;
}