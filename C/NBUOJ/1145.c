#include <stdio.h>
#define N 101
int main()
{
    char input[N] = {'\0'};
    int i, n = 0, flag = 1;
    input[0] = getchar();
    while (!(input[n] == '\n' || input[n] == '\r'))
    {
        n++;
        input[n] = getchar();
    }
    input[n] = '\0';
    n--;
    for (i = 0; i < (n / 2 + 1); i++)
    {
        if (input[i] != input[n - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}