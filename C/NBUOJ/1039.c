#include <stdio.h>
int main()
{
    int n, count, sum_o, sum_e, clone;
    scanf("%d", &n);
    for (count = 1, sum_o = 0, sum_e = 0; count <= n; count++)
    {
        clone = count;
        if (clone % 2 == 1)
            sum_o += count;
        else
            sum_e += count;
    }
    printf("%d\n%d\n", sum_o, sum_e);
    return 0;
}