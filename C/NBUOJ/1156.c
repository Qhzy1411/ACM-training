#include <stdio.h>
#define N 10
int main()
{
    int list[N] = {0}, i, I, max, maxi, temp;
    for (i = 0; i < N; i++)
        scanf("%d", &list[i]);
    for (I = 0; I < N - 1; I++)
    {
        max = list[I];
        maxi = I;
        for (i = I; i < N; i++)
        {
            if (list[i] > max)
            {
                max = list[i];
                maxi = i;
            }
        }
        if (maxi != I)
        {
            temp = list[I];
            list[I] = list[maxi];
            list[maxi] = temp;
        }
    }
    for (i = 0; i < N; i++)
        printf("%d ", list[i]);
    putchar('\n');
    return 0;
}