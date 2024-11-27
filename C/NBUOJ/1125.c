#include <stdio.h>
#define N 100
int main()
{
    double num[N] = {1, 1};
    int n, i;
    scanf("%d", &n);
    if (n > 2)
    {
        for (i = 2; i < n; i++)
            num[i] = num[i - 1] + num[i - 2];
    }
    for (i = 0; i < n; i++)
        printf("%.0f ", num[i]);
    putchar('\n');
    return 0;
}