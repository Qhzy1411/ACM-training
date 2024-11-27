#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, z;
    scanf("%lf%lf", &x, &y);
    z = sqrt(x * x + y * y);
    printf("%.2f\n", z);
    return 0;
}