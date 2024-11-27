#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf", &x);
    if (x < 7)
        y = 1.2 * x;
    else
        y = 1.9 * x;
    printf("%.2f", y);
    return 0;
}