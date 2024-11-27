#include <stdio.h>
int main()
{
    int n, count = 0, i;
    double input, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &input);
        sum += input;
        if (input < 60)
            count++;
    }
    printf("%.1f\n%d\n", sum / n, count);
    return 0;
}