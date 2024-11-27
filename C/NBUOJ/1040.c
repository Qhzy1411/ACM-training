#include <stdio.h>
int main()
{
    int number, count, input, sum_o, sum_e, clone;
    scanf("%d", &number);
    for (count = 1, sum_o = 0, sum_e = 0; count <= number; count++)
    {
        scanf("%d", &input);
        clone = input;
        if (clone % 2 == 1)
            sum_o += input;
        else
            sum_e += input;
    }
    printf("%d\n%d\n", sum_o, sum_e);
    return 0;
}