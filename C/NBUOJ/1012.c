#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, p, s;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("%.2f\n", s);
    }
    else
        printf("Error\n");
    return 0;
}