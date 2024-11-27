#include <stdio.h>
#define N 15
int main()
{
    int list[N][N] = {0}, n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        list[i][0] = list[i][i] = 1;
    for (i = 2; i < n; i++)
    {
        for (j = 1; j < i; j++)
            list[i][j] = list[i - 1][j - 1] + list[i - 1][j];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%d ", list[i][j]);
        putchar('\n');
    }
    return 0;
}