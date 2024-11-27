#include <stdio.h>
int main()
{
    int n, i, j;
    double sum = 1, sum1 = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            sum1 *= j;
        sum += 1.0 / sum1;
        sum1 = 1;
    }
    printf("%f\n", sum);
    return 0;
}