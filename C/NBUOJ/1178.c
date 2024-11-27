#include <stdio.h>
#define N 100
int main()
{
    int n, i, j, k, list[N] = {0}, equal[50] = {0}, equal0 = 1, flag = 1, flag1 = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (list[i] == list[j])
            {
                if (list[i] == 0)
                {
                    if (equal0)
                    {
                        printf("0 ");
                        flag = 0;
                        equal0 = 1;
                    }
                }
                else
                {
                    flag1 = 1;
                    for (k = 0; equal[k] != 0; k++)
                    {
                        if (list[i] == equal[k])
                        {
                            flag1 = 0;
                            break;
                        }
                    }
                    if (flag1)
                    {
                        printf("%d ", list[i]);
                        flag = 0;
                        equal[k] = list[i];
                    }
                }
            }
        }
    }
    if (flag)
        printf("-1");
    putchar('\n');
    return 0;
}