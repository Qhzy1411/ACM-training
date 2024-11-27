#include <stdio.h>
int main()
{
    int n, number, sum1, sum2;
    sum1 = sum2 = 0;
    do
    {
        scanf("%d%d", &n, &number);
        if (n == 1)
            sum1 += number;
        else
            sum2 += number;
    } while (!(n == 0 && number == 0));
    if (sum1 == sum2)
        printf("equal\n");
    else if (sum1 > sum2)
        printf("1 %d\n", sum1);
    else
        printf("2 %d\n", sum2);
    return 0;
}