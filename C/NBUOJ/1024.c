#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf", &x);
    y = 2 * x * x + x + 8;
    printf("%.1f\n", y);
    return 0;
}