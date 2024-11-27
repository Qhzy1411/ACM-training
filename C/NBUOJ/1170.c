#include <stdio.h>
#define N 1000
int main()
{
    int list[N] = {0}, i, I, n, min, mini, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);
    for (I = 0; I < n - 1; I++)
    {
        min = list[I];
        mini = I;
        for (i = I; i < n; i++)
        {
            if (list[i] < min)
            {
                min = list[i];
                mini = i;
            }
        }
        if (mini != I)
        {
            temp = list[I];
            list[I] = list[mini];
            list[mini] = temp;
        }
    }
    for (i = 0; i < n - 1; i++)
        printf("%d ", list[i]);
    printf("%d\n", list[n - 1]);
    return 0;
}