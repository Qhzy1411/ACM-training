#include <stdio.h>
int main()
{
    double n, num1, num2, num3;
    int flag = 1;
    scanf("%lf", &n);
    for (num1 = 0; num1 <= n; num1++)
    {
        for (num2 = 0; num2 <= n - num1; num2++)
        {
            num3 = n - num1 - num2;
            if (4 * num1 + 3 * num2 + 0.5 * num3 == n)
            {
                printf("%.0f %.0f %.0f\n", num1, num2, num3);
                flag = 0;
            }
        }
    }
    if (flag)
        printf("Error\n");
    return 0;
}