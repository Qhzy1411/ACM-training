#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        printf("%d ", i * i);
        count++;
        if (count == 10)
        {
            putchar('\n');
            count = 0;
        }
    }
    return 0;
}