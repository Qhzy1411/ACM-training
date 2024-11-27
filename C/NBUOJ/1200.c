#include <stdio.h>
int main()
{
    int i, count = 0;
    double input, sum = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%lf", &input);
        if (input > 0)
        {
            count++;
            sum += input;
        }
    }
    sum /= count;
    printf("%.2f\n", sum);
    return 0;
}