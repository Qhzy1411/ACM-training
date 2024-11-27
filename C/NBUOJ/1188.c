#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    int list[N] = {0}, temp[N] = {0}, n, m, i, j = 0;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);
    for (i = n - m; i < n; i++, j++)
        temp[j] = list[i];
    for (i = 0; i < m; i++)
    {
        for (j = n - m + i; j > i; j--)
            list[j] = list[j - 1];
        list[i] = temp[i];
    }
    for (i = 0; i < n - 1; i++)
        printf("%d ", list[i]);
    printf("%d\n", list[n - 1]);
    return 0;
}