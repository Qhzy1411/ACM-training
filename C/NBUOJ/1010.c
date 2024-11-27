#include <stdio.h>
#define PI 3.14
int main()
{
    double r, v;
    scanf("%lf", &r);
    v = 4 * PI * r * r * r / 3;
    printf("%.2f\n", v);
    return 0;
}