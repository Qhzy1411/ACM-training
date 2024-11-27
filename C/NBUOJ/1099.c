#include <stdio.h>
int main()
{
    int n, i;
    double s = 0;
    scanf("%d", &n);
    n = 2 * n - 1;
    for (i = 1; i <= n; i += 2)
        s += 1.0 / i;
    printf("%.2f\n", s);
    return 0;
}