#include <stdio.h>
int main()
{
    int a, input, sum = 0;
    scanf("%d", &a);
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &input);
        if (input < a)
            sum += input;
    }
    printf("%d\n", sum);
    return 0;
}