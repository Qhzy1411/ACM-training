#include <stdio.h>
#define N 10
int main()
{
    int list[N] = {0}, i, max, maxi, min, mini;
    for (i = 0; i < N; i++)
        scanf("%d", &list[i]);
    max = min = list[0];
    maxi = mini = 0;
    for (i = 1; i < N; i++)
    {
        if (list[i] > max)
        {
            max = list[i];
            maxi = i;
        }
        else if (list[i] < min)
        {
            min = list[i];
            mini = i;
        }
    }
    printf("%d %d\n%d %d\n", max, maxi, min, mini);
    return 0;
}