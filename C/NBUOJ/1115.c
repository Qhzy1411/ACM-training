#include <stdio.h>
#include <math.h>
int main()
{
    int maxn, day, n = 0;
    double ave;
    scanf("%d", &maxn);
    for (day = 0; n <= maxn; day++)
        n += pow(2, day + 1);
    n -= pow(2, day);
    ave = n * 0.4 / (day - 1);
    printf("%.2f\n", ave);
    return 0;
}