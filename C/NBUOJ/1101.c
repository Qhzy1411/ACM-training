#include <stdio.h>
int main()
{
    int n, i;
    double sum = 0, num1 = 1, num2 = 1, temp;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        sum += num2 / num1;
    }
    printf("%f\n", sum);
    return 0;
}