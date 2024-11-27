#include <stdio.h>
int max(int x, int y)
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
int min(int x, int y)
{
    return (x * y / max(x, y));
}
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d %d\n", max(x, y), min(x, y));
    return 0;
}