#include <stdio.h>
int main()
{
    int x1, x2, x3, x4;
    scanf("%d%d%d%d", &x1, &x2, &x3, &x4);
    if (x1 % 10 == x2 / 10 && x2 % 10 == x3 / 10 && x3 % 10 == x4 / 10)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}