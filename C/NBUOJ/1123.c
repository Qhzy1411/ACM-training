#include <stdio.h>
#include <math.h>
int main()
{
    double x, cos;
    scanf("%lf", &x);
    cos = 1 - (pow(x, 2) / (1 * 2)) + (pow(x, 4) / (1 * 2 * 3 * 4)) - (pow(x, 6) / (1 * 2 * 3 * 4 * 5 * 6)) + (pow(x, 8) / (1 * 2 * 3 * 4 * 5 * 6 * 7 * 8));
    printf("%.2f\n", cos);
    return 0;
}