#include <stdio.h>
int sum_of_factors(int x)
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
            sum += i;
    }
    return sum;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (sum_of_factors(a) == b && sum_of_factors(b) == a)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}