#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    if (x <= 20)
        y = 0;
    else if (x <= 40)
        y = (x - 20) * 2;
    else
        y = (x - 40) * 5 + 40;
    printf("%d\n", y);
    return 0;
}