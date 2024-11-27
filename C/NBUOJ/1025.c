#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf", &x);
    y = 3 * x * x * x * x - 2 * x * x * x - x * x + 10;
    printf("%.1f\n", y);
    return 0;
}