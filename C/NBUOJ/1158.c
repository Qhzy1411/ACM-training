#include <stdio.h>
#define N 10
int main()
{
    int list[N] = {0}, i, maxi, mini, key, keyi, flag = 1;
    for (i = 0; i < N; i++)
        scanf("%d", &list[i]);
    scanf("%d", &key);
    maxi = N - 1;
    mini = 0;
    while (maxi >= mini)
    {
        i = (maxi + mini) / 2;
        if (list[i] > key)
            maxi = i - 1;
        else if (list[i] < key)
            mini = i + 1;
        else
        {
            flag = 0;
            keyi = i;
            break;
        }
    }
    if (flag)
        printf("not found\n");
    else
        printf("%d\n", keyi);
    return 0;
}