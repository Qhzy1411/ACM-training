#include <stdio.h>
#define N 100
int main()
{
    long long int num[N] = {1, 1};
    int n, i;
    while (~scanf("%d", &n))
    {
        if (n > 2)
        {
            for (i = 2; i <= n; i++)
                num[i] = num[i - 1] + num[i - 2];
        }
        printf("%lld\n", num[n]);
    }
    return 0;
}