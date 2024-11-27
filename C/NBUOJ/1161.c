#include <stdio.h>
int main()
{
    int list[12], i, max;
    for (i = 0; i < 12; i++)
        scanf("%d", &list[i]);
    max = list[0];
    for (i = 1; i < 12; i++)
    {
        if (list[i] > max)
            max = list[i];
    }
    printf("%d\n", max);
    return 0;
}