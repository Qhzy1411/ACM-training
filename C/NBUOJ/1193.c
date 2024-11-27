#include <stdio.h>
#define N 50
int main()
{
    int list[N] = {0}, n, m, k, i, temp;
    scanf("%d%d%d", &n, &m, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);
    m--;
    for (i = 0; i < k / 2; i++)
    {
        temp = list[m + i];
        list[m + i] = list[m + k - i - 1];
        list[m + k - i - 1] = temp;
    }
    for (i = 0; i < n; i++)
        printf("%d ", list[i]);
    putchar('\n');
    return 0;
}