#include <stdio.h>
int main()
{
    int n1, n2, i, count = 0;
    scanf("%d%d", &n1, &n2);
    for (i = n1; i <= n2; i++)
    {
        if (i % 3 != 0)
        {
            printf("%d", i);
            count++;
            if (count == 5)
            {
                printf("\n");
                count = 0;
            }
            else
                printf(" ");
        }
    }
    return 0;
}