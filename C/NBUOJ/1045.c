#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, distance;
    scanf("%lf%lf", &x, &y);
    distance = sqrt(x * x + y * y);
    if (distance > 10)
        printf("out\n");
    else if (distance < 10)
        printf("in\n");
    else
        printf("on\n");
    return 0;
}