#include <stdio.h>
#define N 10000
int main()
{
    int input[N] = {0};
    int m, n, i, j;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m * n; i++)
        scanf("%d", &input[i]);
    for (i = 1; i < m + 1; i++)
    {
        for (j = 1; j < n + 1; j++)
            printf("%d ", input[(i - 1) * n + j - 1]);
        putchar('\n');
    }
    return 0;
}