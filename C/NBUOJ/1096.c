#include <stdio.h>
int main()
{
    int n, s = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s += i * i * i;
    printf("%d\n", s);
    return 0;
}