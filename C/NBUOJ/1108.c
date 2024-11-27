#include <stdio.h>
int main()
{
    int input, count;
    double sum;
    for (count = 0, sum = 0; scanf("%d", &input) != EOF;)
    {
        count++;
        sum += input;
    }
    printf("%.2f\n", sum / count);
    return 0;
}
