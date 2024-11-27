#include <stdio.h>
int main()
{
    int n, a, s = 0, i;
    int num[9] = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};
    scanf("%d%d", &n, &a);
    for (i = 1; i <= n; i++)
    {
        s += a * num[i - 1];
    }
    printf("%d\n", s);
    return 0;
}