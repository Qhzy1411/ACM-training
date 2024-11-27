#include <stdio.h>
int main()
{
    int N, a, b, count;
    scanf("%d", &N);
    for (count = 1; count <= N; count++)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}