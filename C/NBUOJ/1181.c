#include <stdio.h>
#define N 100
int main()
{
    int list[N][N] = {0}, m, n, i, j, k, l, max, temp, flag = 1, flag1 = 1, flag2 = 1;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &list[i][j]);
    }
    for (i = 0; i < m; i++)
    {
        flag1 = 1;
        max = list[i][0];
        l = 0;
        for (j = 1; j < n; j++)
        {
            if (list[i][j] > max)
            {
                max = list[i][j];
                l = j;
            }
        }
        for (k = 0; k < m; k++)
        {
            if (list[k][l] < max)
                flag1 = 0;
        }
        if (flag1)
        {
            if (flag2)
            {
                temp = max;
                flag2 = 0;
            }
            else
            {
                if (max < temp)
                    temp = max;
            }
            flag = 0;
        }
    }
    if (flag)
        printf("not exist\n");
    else
        printf("%d\n", temp);
    return 0;
}