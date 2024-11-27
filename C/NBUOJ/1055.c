#include <stdio.h>
#define N 1001
int main()
{
    int count = 0;
    char input[N] = {'\0'};
    gets(input);
    while (!(input[0] == '@' && input[1] == '\0'))
    {
        count++;
        gets(input);
    }
    printf("%d\n", count);
    return 0;
}