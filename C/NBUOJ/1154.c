#include <stdio.h>
#define N 5
int main()
{
    int list[N] = {0}, i, i1, key, flag = 1;
    for (i = 0; i < N; i++)
        scanf("%d", &list[i]);
    scanf("%d", &key);
    for (i = 0; i < N; i++)
    {
        if (list[i] == key)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("not found\n");
    else
    {
        flag = 1;
        for (i = 0; i < N; i++)
        {
            if (flag)
            {
                if (list[i] == key)
                {
                    flag = 0;
                    continue;
                }
            }
            printf("%d ", list[i]);
        }
        putchar('\n');
    }
    return 0;
}