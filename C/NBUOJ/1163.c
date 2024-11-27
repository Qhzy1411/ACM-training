#include <stdio.h>
#define N 1000
int main()
{
    int list1[N] = {0}, list2[N] = {0}, n, i, j, flag = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &list1[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &list2[i]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (list1[i] == list2[j])
            {
                printf("%d\n", list1[i]);
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        printf("failure\n");
    return 0;
}