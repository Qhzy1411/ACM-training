#include <stdio.h>
int main()
{
    int d, y, day_of_month[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30}, day = 0;
    scanf("%d%d", &y, &d);
    for (int i = 0; i < y - 1; i++)
        day += day_of_month[i];
    day += d;
    if (day % 5 == 1 || day % 5 == 2 || day % 5 == 3)
        printf("fishing\n");
    else
        printf("sleeping\n");
    return 0;
}