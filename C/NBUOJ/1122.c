#include <stdio.h>
#define N 100
int main()
{
    int m, i, j, count = 0;
    int state[N];
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        state[i] = 1;
    for (i = 1; i <= m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if ((j + 1) % i == 0)
                state[j] = -state[j];
        }
    }
    for (i = 0; i < m; i++)
    {
        if (state[i] == -1)
            count++;
    }
    printf("%d\n", count);
    for (i = 0; i < m; i++)
    {
        if (state[i] == -1)
            printf("%4d", i + 1);
    }
    putchar('\n');
    return 0;
}