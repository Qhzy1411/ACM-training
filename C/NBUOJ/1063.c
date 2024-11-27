#include <stdio.h>
int main()
{
    char a, b;
    a = getchar();
    b = getchar();
    if (a > b)
        printf("%c %c\n", b, a);
    else
        printf("%c %c\n", a, b);
    return 0;
}