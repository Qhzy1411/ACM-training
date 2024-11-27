#include <stdio.h>
#define N 100
int main()
{
    int list[N][N] = {0}, n, i, j, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &list[i][j]);
    }
    for (i = 0; i < n; i++)
        sum += list[i][i];
    printf("%d", sum);
    return 0;
}