#include <stdio.h>
int main()
{
    int count = 0;
    double input, sum = 0;
    scanf("%lf", &input);
    while (input >= 0)
    {
        sum += input;
        count++;
        scanf("%lf", &input);
    }
    printf("%.1f\n", sum / count);
    return 0;
}