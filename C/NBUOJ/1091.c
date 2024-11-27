#include <stdio.h>
int main()
{
    int n, i, flag = 1, m = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        m += flag * i;
        flag = -flag;
    }
    printf("%d\n", m);
    return 0;
}