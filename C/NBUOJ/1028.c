#include <stdio.h>
int main()
{
    double money, rate, interest;
    scanf("%lf%lf", &rate, &money);
    interest = money * (1 + rate);
    printf("%.2f\n", interest);
    return 0;
}