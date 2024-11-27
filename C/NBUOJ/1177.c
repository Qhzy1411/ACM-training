#include <stdio.h>
#define N 100
int main()
{
    int n, i, list[N] = {0}, min, mini, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);
    min = list[0];
    mini = 0;
    for (i = 1; i < n; i++)
    {
        if (list[i] < min)
        {
            min = list[i];
            mini = i;
        }
    }
    if (mini != 0)
    {
        temp = list[0];
        list[0] = list[mini];
        list[mini] = temp;
    }
    for (i = 0; i < n; i++)
        printf("%d ", list[i]);
    putchar('\n');
    return 0;
}