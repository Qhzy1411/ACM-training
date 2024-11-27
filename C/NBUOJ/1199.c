#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{
    char list[N] = {'\n'};
    int n, i, flag1 = 0, flag2 = 0;
    scanf("%s", &list);
    n = strlen(list);
    for (i = 0; i < n; i++)
    {
        if (list[i] >= '0' && list[i] <= '9')
            flag1 = 1;
        else if (list[i] >= 'a' && list[i] <= 'z' || list[i] >= 'A' && list[i] <= 'Z')
            flag2 = 1;
    }
    if (flag1 && !(flag2))
        printf("digit\n");
    else if (flag1 && flag2)
        printf("mixed\n");
    else if (!(flag1) && flag2)
        printf("character\n");
    return 0;
}