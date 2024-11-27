#include <stdio.h>
int main()
{
    int len = 0;
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        if (ch >= '0' && ch <= '9')
            len++;
        ch = getchar();
    }
    printf("%d\n", len);
    return 0;
}