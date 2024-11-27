#include <stdio.h>
int count(int day)
{
    int i, sum = 1;
    for (i = day - 1; i > 0; i--)
    {
        sum += 1;
        sum *= 2;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", count(n));
    return 0;
}