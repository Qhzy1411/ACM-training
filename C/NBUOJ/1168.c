#include <stdio.h>
#define N 100
int main()
{
    int list[N][2], key, n, i, flag = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d%d", &list[i][0], &list[i][1]);
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (list[i][0] == key)
        {
            printf("%d\n", list[i][1]);
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("No found!\n");
    return 0;
}