#include <stdio.h>
#define N 11
int main()
{
    int input[N] = {0}, i, j, key;
    for (i = 0; i < N - 1; i++)
        scanf("%d", &input[i]);
    scanf("%d", &key);
    for (j = 0; j < N - 1; j++)
    {
        if (input[j] >= key)
            break;
    }
    for (i = N - 1; i > j; i--)
        input[i] = input[i - 1];
    input[j] = key;
    for (i = 0; i < N; i++)
        printf("%d ", input[i]);
    putchar('\n');
    return 0;
}