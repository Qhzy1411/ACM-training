#include <stdio.h>
int main()
{
    int flag = 0, n, n1, n2, n3, i, sum;
    scanf("%d", &n);
    for (i = 153; i < n; i++)
    {
        n3 = i % 10;
        n2 = i / 10 % 10;
        n1 = i / 100;
        sum = n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3;
        if (sum == i)
        {
            printf("%d\n", i);
            flag = 1;
        }
    }
    if (!(flag))
        printf("No Answer\n");
    return 0;
}