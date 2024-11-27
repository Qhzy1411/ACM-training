#include <stdio.h>
int main()
{
    double input[9] = {0}, sum;
    int i, j;
    for (i = 0; i < 9; i++)
        scanf("%lf", &input[i]);
    for (i = 1; i <= 3; i++)
    {
        sum = 0;
        for (j = 1; j <= 3; j++)
            sum += input[(i - 1) * 3 + j - 1];
        sum /= 3;
        printf("%.1f\n", sum);
    }
    return 0;
}