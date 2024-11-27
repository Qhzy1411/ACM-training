#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    scanf("%lf%lf", &x, &y);
    if (sqrt((x - 2) * (x - 2) + (y - 2) * (y - 2)) <= 0.5 || sqrt((x + 2) * (x + 2) + (y - 2) * (y - 2)) <= 0.5 || sqrt((x - 2) * (x - 2) + (y + 2) * (y + 2)) <= 0.5 || sqrt((x + 2) * (x + 2) + (y + 2) * (y + 2)) <= 0.5)
        printf("50\n");
    else
        printf("0\n");
    return 0;
}