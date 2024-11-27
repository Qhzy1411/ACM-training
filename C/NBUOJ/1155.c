#include <stdio.h>
#define N 10
int main()
{
    int list[N] = {0}, i;
    for (i = 0; i < N; i++)
        scanf("%d", &list[i]);
    for (i--; i >= 0; i--)
        printf("%d ", list[i]);
    putchar('\n');
    return 0;
}