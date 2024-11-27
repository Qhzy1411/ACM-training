#include <stdio.h>
int main()
{
    int a, b, n, i, sum = 0;
    scanf("%d%d", &a, &b);
    for (n = a; n <= b; n++)
    {
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
                sum += i;
        }
        if (n == sum)
            printf("%d\n", n);
        sum = 0;
    }
    return 0;
}