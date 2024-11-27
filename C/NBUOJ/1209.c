#include <stdio.h>
#include <math.h>
int getnum(int x)
{
    int count = 0;
    while (x > 0)
    {
        count++;
        x /= 10;
    }
    return count;
}
int main()
{
    int x, x1, sum = 0, num;
    scanf("%d", &x1);
    num = getnum(x1);
    x = x1;
    for (int i = 0; i < num; ++i)
    {
        sum += pow(x % 10, num);
        x /= 10;
    }
    if (x1 == sum)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}