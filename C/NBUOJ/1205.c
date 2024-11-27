#include <stdio.h>
int main()
{
    double x, y, h, s;
    scanf("%lf%lf%lf", &x, &y, &h);
    s = (x + y) * h / 2;
    printf("%.2f\n", s);
    return 0;
}