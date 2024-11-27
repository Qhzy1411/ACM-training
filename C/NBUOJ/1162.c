#include <stdio.h>
int main()
{
    int list[12], i, max, maxx, maxy;
    for (i = 0; i < 12; i++)
        scanf("%d", &list[i]);
    max = list[0];
    maxx = maxy = 0;
    for (i = 1; i < 12; i++)
    {
        if (list[i] > max)
        {
            max = list[i];
            maxx = i / 4;
            maxy = i % 4;
        }
    }
    printf("%d %d %d\n", max, maxx, maxy);
    return 0;
}
