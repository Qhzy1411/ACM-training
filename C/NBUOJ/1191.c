#include <stdio.h>
int main()
{
    int list[3][4], i, j, max;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            scanf("%d", &list[i][j]);
    }
    for (i = 0; i < 3; i++)
    {
        max = list[i][0];
        for (j = 1; j < 4; j++)
        {
            if (list[i][j] > max)
                max = list[i][j];
        }
        printf("%d\n", max);
    }
    return 0;
}