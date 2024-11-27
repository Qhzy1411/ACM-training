#include <stdio.h>
int main()
{
    double a, b, c, d, e, f;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    e = a / b;
    f = a / c * d;
    printf("%.1f %.1f", e, f);
    return 0;
}