#include <stdio.h>
#define N 15
int main()
{
    int n, i, i1, j, j1, num, list[N][N] = {0};
    scanf("%d", &n);
    i = 0;
    j = n / 2;
    list[i][j] = 1;
    for (num = 2; num <= n * n; num++)
    {
        i1 = (i + n - 1) % n;
        j1 = (j + 1) % n;
        if (list[i1][j1] != 0)
        {
            i1 = (i + 1) % n;
            j1 = j;
        }
        i = i1;
        j = j1;
        list[i][j] = num;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", list[i][j]);
        putchar('\n');
    }
    return 0;
}