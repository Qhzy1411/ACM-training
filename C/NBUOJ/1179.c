#include <stdio.h>
#define N 1000
int main()
{
    int n, i;
    double list[N] = {0}, max, min, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%lf", &list[i]);
    max = min = list[0];
    for (i = 1; i < n; i++)
    {
        if (list[i] > max)
            max = list[i];
        else if (list[i] < min)
            min = list[i];
    }
    for (i = 0; i < n; i++)
        sum += list[i];
    sum -= max;
    sum -= min;
    sum /= (n - 2);
    printf("%.2f\n", sum);
    return 0;
}