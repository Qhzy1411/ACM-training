#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    c = a / b;
    d = a % b;
    printf("%d %d\n", c, d);
    return 0;
}