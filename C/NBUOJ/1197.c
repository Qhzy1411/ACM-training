#include <stdio.h>
int main()
{
    int n, m, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        printf("%d\n", (2 * m * m) - m + 1);
    }
    return 0;
}