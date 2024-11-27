#include <stdio.h>
int main()
{
    int n = 10, input, sum = 0, i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input);
        sum += input;
    }
    printf("%d\n", sum);
    return 0;
}