#include <stdio.h>
int main()
{
    double x, s;
    char op;
    scanf("%lf%c", &x, &op);
    if (op == 's')
        s = x * x;
    else if (op == 'c')
        s = 3.14 * x * x;
    printf("%.2f\n", s);
    return 0;
}