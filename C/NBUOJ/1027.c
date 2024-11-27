#include <stdio.h>
#include <math.h>
int main()
{
    double money, year, rate, interest;
    scanf("%lf%lf%lf", &money, &year, &rate);
    interest = money * pow(1 + rate, (int)(year)) - money;
    printf("%.2f\n", interest);
    return 0;
}