#include <stdio.h>
int main()
{
    int n, sum = 1, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum *= i;
    printf("%d\n", sum);
    return 0;
}