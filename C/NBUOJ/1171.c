#include <stdio.h>
int gcf(int x, int y) // 求最大公约数greatest common factor
{
    int temp;
    if (y > x)
    {
        temp = x;
        x = y;
        y = temp;
    }
    else if (x == y)
        return x;
    while (x % y != 0)
    {
        x = x - y;
        if (y > x)
        {
            temp = x;
            x = y;
            y = temp;
        }
    }
    return y;
}
int lcm(int x, int y) // 求最小公倍数least common multiple
{
    return (x * y / gcf(x, y));
}
int main()
{
    int n, i, input, temp;
    scanf("%d", &n);
    scanf("%d", &temp);
    for (i = 1; i < n; i++)
    {
        scanf("%d", &input);
        temp = lcm(temp, input);
    }
    printf("%d\n", temp);
    return 0;
}