#include <stdio.h>
int main()
{
    int input, count;
    double sum;
    scanf("%d", &input);
    for (sum = 0, count = 1; count <= input; count++)
        sum += 1.0 / count;
    printf("%f\n", sum);
    return 0;
}