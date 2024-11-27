#include <stdio.h>
#define N 10
int main()
{
    int input[N] = {0}, i, max, min;
    for (i = 0; i < 10; i++)
        scanf("%d", &input[i]);
    max = min = input[0];
    for (i = 1; i < 10; i++)
    {
        if (input[i] > max)
            max = input[i];
        else if (input[i] < min)
            min = input[i];
    }
    printf("%d\n%d\n", max, min);
    return 0;
}