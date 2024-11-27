#include <stdio.h>
#define N 1000
int main()
{
    int k1, k2, i, j, count = 0, prime[N] = {0}, flag = 1;
    scanf("%d%d", &k1, &k2);
    for (i = k1; i <= k2; i++)
    {
        flag = 1;
        if (i == 1)
            flag = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                flag = 0;
        }
        if (flag)
        {
            prime[count] = i;
            count++;
        }
    }
    printf("%d\n", count);
    count--;
    for (i = 0; i < count; i++)
        printf("%d ", prime[i]);
    printf("%d\n", prime[count]);
    return 0;
}