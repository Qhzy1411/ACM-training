#include <stdio.h>
int main()
{
    int input, sum;
    sum = 0;
    scanf("%d", &input);
    do
    {
        sum += input % 10;
        input /= 10;
    } while (input != 0);
    printf("%d\n", sum);
    return 0;
}