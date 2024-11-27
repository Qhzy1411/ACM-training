#include <stdio.h>
int main()
{
    int len = 0;
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            len++;
        ch = getchar();
    }
    printf("%d\n", len);
    return 0;
}