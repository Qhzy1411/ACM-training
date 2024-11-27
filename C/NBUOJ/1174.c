#include <stdio.h>
int prime(int x) // 判断质数
{
    int i, flag = 1;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    int input, x, y, i;
    scanf("%d", &input);
    for (i = 1; i < input / 2; i++)
    {
        x = input - 2 * i - 1;
        y = input - x;
        if (prime(x) && prime(y))
        {
            printf("%d=%d+%d\n", input, y, x);
            break;
        }
    }
    return 0;
}
