#include <stdio.h>
int main()
{
    char op, a, b;
    op = getchar();
    a = getchar();
    b = getchar();
    if (op == '+')
        printf("%d\n", a + b);
    else if (op == '-')
        printf("%d\n", a - b);
    return 0;
}