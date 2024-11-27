#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    unsigned __int64 sum = 0, a;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        a = pow(2, i);
        sum = a + sum;
    }
    printf("%I64u\n", sum);
    return 0;
}