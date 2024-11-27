#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{
    char list[N] = {'\0'}, num[N] = {'\0'};
    int i, numi;
    fgets(list, sizeof(list), stdin);
    list[strcspn(list, "\r")] = '\0';
    list[strcspn(list, "\n")] = '\0';
    numi = 0;
    for (i = 0; list[i] != '\0'; i++)
    {
        if (list[i] >= '0' && list[i] <= '9')
        {
            num[numi] = list[i];
            numi++;
        }
    }
    printf("%s\n", num);
    return 0;
}