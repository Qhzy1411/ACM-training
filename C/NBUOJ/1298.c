#include <stdio.h>
int main()
{
    int list[5][5] = {0};
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &list[i][j]);
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            list[i][j] = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%4d", list[i][j]);
        putchar('\n');
    }
    return 0;
}