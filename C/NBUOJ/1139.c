#include <stdio.h>
#define N 10
char change(char x)
{
    if (x >= 'a' && x <= 'v' || x >= 'A' && x <= 'V')
        return x + 4;
    else
        return x - 22;
}
int main()
{
    char input[N] = {'\0'};
    int i;
    gets(input);
    for (i = 0; input[i] != '\0'; i++)
        printf("%c", change(input[i]));
    putchar('\n');
    return 0;
}