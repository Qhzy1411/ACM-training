#include <stdio.h>
int main()
{
    int n, i;
    double high = 100, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += high;
        if (i != 1)
            sum += high;
        high /= 2;
    }
    printf("%f %f\n", sum, high);
    return 0;
}