#include <stdio.h>
#define N 600
int main()
{
    char list[N] = {'\0'}, max;
    int n = 0, i, j, k, count, maxi[100] = {0}, maxcount = 0;
    do
    {
        scanf("%c", &list[n]);
        n++;
    } while (list[n - 1] != '\n' && list[n - 1] != '\r');
    n--;
    list[n] = '\0';
    max = list[0];
    for (i = 1; i < n; i++)
    {
        if (list[i] > max)
            max = list[i];
    }
    for (i = 1; i < n; i++)
    {
        if (list[i] == max)
        {
            maxi[maxcount] = i;
            maxcount++;
        }
    }
    for (i = maxcount - 1, count = 0; i >= 0; i--, count++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = n + j + count * 5; k > j + maxi[i] + 1; k -= 1)
                list[k] = list[k - 1];
        }
        list[maxi[i] + 1] = '(';
        list[maxi[i] + 2] = 'm';
        list[maxi[i] + 3] = 'a';
        list[maxi[i] + 4] = 'x';
        list[maxi[i] + 5] = ')';
    }
    for (i = 0; i < n + maxcount * 5; i++)
        printf("%c", list[i]);
    putchar('\n');
    return 0;
}