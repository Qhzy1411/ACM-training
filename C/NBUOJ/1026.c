#include <stdio.h>
int main()
{
    double x, y, cost;
    scanf("%lf%lf", &x, &y);
    cost = 0.538 * x + 0.03 * y;
    printf("%.2f\n", cost);
    return 0;
}