#include <stdio.h>
int main()
{
    int list[12], i, j;
    for (i = 0; i < 12; i++)
        scanf("%d", &list[i]);
    for (i = 0; i < 12; i++)
        list[i]++;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", list[i * 4 + j]);
        putchar('\n');
    }
    return 0;
}