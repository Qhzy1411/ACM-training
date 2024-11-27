#include <stdio.h>
int Fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n, m, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        printf("%d\n", Fibonacci(m));
    }
    return 0;
}