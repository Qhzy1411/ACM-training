#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, flag = 1;
    double sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        sum += flag * 1.0 / pow(2, i);
        flag = -flag;
    }
    printf("%.2f\n", sum);
    return 0;
}