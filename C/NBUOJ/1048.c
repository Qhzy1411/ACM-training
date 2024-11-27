#include <stdio.h>
int main()
{
    double input, tl, num;
    scanf("%lf", &input);
    tl = input - 3500;
    if (tl <= 0)
        num = 0;
    else if (tl <= 1500)
        num = tl * 0.03;
    else if (tl <= 4500)
        num = tl * 0.1 - 105;
    else if (tl <= 9000)
        num = tl * 0.2 - 555;
    else if (tl <= 35000)
        num = tl * 0.25 - 1005;
    else if (tl <= 55000)
        num = tl * 0.3 - 2755;
    else if (tl <= 80000)
        num = tl * 0.35 - 5505;
    else
        num = tl * 0.45 - 13505;
    printf("tax=%.2f\n", num);
    return 0;
}