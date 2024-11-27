#include <stdio.h>
int main()
{
    int n, s = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            s += i;
    }
    printf("%d\n", s);
    return 0;
}