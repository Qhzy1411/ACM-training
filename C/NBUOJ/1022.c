#include <stdio.h>
int main()
{
    char a, b;
    a = getchar();
    b = getchar();
    a += 3;
    b += 3;
    printf("%c%c\n", a, b);
    return 0;
}