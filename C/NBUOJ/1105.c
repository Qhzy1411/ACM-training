#include <stdio.h>
int main()
{
    int n, i, j, sum = 0, sum1 = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            sum1 *= j;
        sum += sum1;
        sum1 = 1;
    }
    printf("%d\n", sum);
    return 0;
}