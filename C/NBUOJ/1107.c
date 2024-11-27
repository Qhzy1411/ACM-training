#include <stdio.h>
int main()
{
    int n, input, sum = 0, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input);
        sum += input;
    }
    printf("%d\n", sum);
    return 0;
}