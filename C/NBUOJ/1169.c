#include <stdio.h>
#define N 20
int main()
{
    int list[N][N] = {0}, m, n, i, j;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &list[i][j]);
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
            printf("%d ", list[i][j]);
        putchar('\n');
    }
    return 0;
}