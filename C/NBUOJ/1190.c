#include <stdio.h>
#include <string.h>
#define N 50
int main()
{
    char list[N] = {'\0'};
    int i, flag = 1;
    fgets(list, sizeof(list), stdin);
    list[strcspn(list, "\r")] = '\0';
    list[strcspn(list, "\n")] = '\0';
    if (!(list[0] >= 'a' && list[0] <= 'z' || list[0] >= 'A' && list[0] <= 'Z' || list[0] == '_'))
        flag = 0;
    for (i = 1; list[i] != '\0'; i++)
    {
        if (!(list[i] >= 'a' && list[i] <= 'z' || list[i] >= 'A' && list[i] <= 'Z' || list[i] >= '0' && list[i] <= '9' || list[i] == '_'))
            flag = 0;
    }
    if (flag)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}