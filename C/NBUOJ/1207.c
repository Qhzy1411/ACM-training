#include <stdio.h>
int main()
{
    int x, m, n, i, sum = 0;
    scanf("%d%d%d", &x, &m, &n);
    for (i = 0; i < n; i++)
        sum += (x + m * i);
    printf("%d\n", sum);
    return 0;
}