#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z')
        ch += 32;
    printf("%c\n", ch);
    return 0;
}