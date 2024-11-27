#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    scanf("%lf", &x);
    if (x >= 0)
        y = x * x - 2;
    else
        y = sqrt(5 - x);
    printf("%.2f\n", y);
    return 0;
}