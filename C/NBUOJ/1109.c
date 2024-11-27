#include <stdio.h>
int main()
{
    int n, i, input, sum = 0;
    for (; scanf("%d", &n) != EOF;)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &input);
            sum += input;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}