#include <stdio.h>
int main()
{
    int n, i, j, s = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            s += j;
    }
    printf("%d\n", s);
    return 0;
}