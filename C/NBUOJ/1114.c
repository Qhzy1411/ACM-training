#include <stdio.h>
int main()
{
    double input, sum = 0;
    scanf("%lf", &input);
    while (input != 0)
    {
        sum += input;
        scanf("%lf", &input);
    }
    printf("%.2f\n", sum);
    return 0;
}