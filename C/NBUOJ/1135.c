#include <stdio.h>
int A(int x, int y)
{
    int i, sum = 1;
    for (i = x; i > 0; i--)
    {
        sum *= y;
        y--;
    }
    return sum;
}
int C(int x, int y)
{
    int sum;
    sum = A(x, y) / A(x, x);
    return sum;
}
int count(int x, int y)
{
    int sum;
    x += 1;
    y += 1;
    sum = C(2, x) * C(2, y);
    return sum;
}
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d\n", count(m, n));
    return 0;
}