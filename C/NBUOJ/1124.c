#include <stdio.h>
#define N 50
int main()
{
    double num[N] = {1, 1};
    int n, i;
    scanf("%d", &n);
    if (n == 1 & n == 2)
    {
        printf("1\n");
        return 0;
    }
    for (i = 2; i < n; i++)
        num[i] = num[i - 1] + num[i - 2];
    printf("%.0f\n", num[n - 1]);
    return 0;
}