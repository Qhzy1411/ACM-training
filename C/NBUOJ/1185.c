#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    char list[N][N] = {'\0'}, temp[N] = {'\0'}, min[N] = {'\0'};
    int n, i, I = 0, j, mini;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", &list[i]);
    for (I = 0; I < n - 1; I++)
    {
        strcpy(min, list[I]);
        mini = I;
        for (i = I + 1; i < n; i++)
        {
            if (strcmp(min, list[i]) > 0)
            {
                mini = i;
                strcpy(min, list[i]);
            }
        }
        if (mini != I)
        {
            strcpy(temp, list[I]);
            strcpy(list[I], list[mini]);
            strcpy(list[mini], temp);
        }
    }
    for (i = 0; i < n; i++)
        printf("%s\n", list[i]);
    return 0;
}