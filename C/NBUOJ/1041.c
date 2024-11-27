#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    if (x < 1)
        y = x;
    else if (x >= 10)
        y = 4 * x - 2;
    else
        y = 3 * x - 1;
    printf("%d\n", y);
    return 0;
}