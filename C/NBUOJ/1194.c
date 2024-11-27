#include <stdio.h>
#define N 50
int main()
{
    int list[N] = {0}, n, i, key = 0, count;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);
    for (i = 0; i < n; i++)
    {
        if (list[i] == 0)
            key++;
    }
    for (count = 0, i = 0; count < (n - key - 1); i++)
    {
        if (list[i] != 0)
        {
            printf("%d ", list[i]);
            count++;
        }
    }
    for (count = i; count < n; count++)
    {
        if (list[count] != 0)
        {
            printf("%d\n", list[count]);
            break;
        }
    }
    return 0;
}