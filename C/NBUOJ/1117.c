#include <stdio.h>
int main()
{
    double n, temp = 45;
    int count;
    scanf("%lf", &n);
    for (count = 0; temp < n; count++)
        temp *= 1.01;
    count += 1980;
    printf("%d\n", count);
    return 0;
}