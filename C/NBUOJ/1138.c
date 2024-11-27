#include <stdio.h>
#define N 10000
int main()
{
    int i;
    char input[N] = {'\0'};
    while (gets(input))
    {
        for (i = 0; input[i] != '\0'; i++)
        {
            if (input[i] == '/' && input[i + 1] == '/')
                break;
            else
                printf("%c", input[i]);
        }
        putchar('\n');
    }
    return 0;
}