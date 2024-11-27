#include <stdio.h>
int main()
{
    int input, sum, i;
    scanf("%d", &input);
    for (i = 1, sum = 0; i <= input; i++)
        sum += i;
    printf("%d\n", sum);
    return 0;
}