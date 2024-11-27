#include <stdio.h>
int main()
{
    double num, money;
    scanf("%lf", &num);
    if (num >= 30)
        money = 48 * num;
    else
        money = 50 * num;
    printf("%.2f\n", money);
    return 0;
}