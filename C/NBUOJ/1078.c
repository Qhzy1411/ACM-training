#include <stdio.h>
int main()
{
    double quantity, cost;
    int type, serve;
    scanf("%lf%d%d", &quantity, &type, &serve);
    if (type == 90)
        cost = 5.14 * quantity;
    else if (type == 93)
        cost = 5.54 * quantity;
    else if (type == 97)
        cost = 5.9 * quantity;
    else if (type == 0)
        cost = 5.13 * quantity;
    if (serve == 1)
        cost *= 0.95;
    else if (serve == 2)
        cost *= 0.98;
    printf("%.2f\n", cost);
    return 0;
}