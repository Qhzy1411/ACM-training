#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{
    char list[5][N];
    int i, len, minlen = 1001, mini;
    for (i = 0; i < 5; i++)
    {
        fgets(list[i], sizeof(list[i]), stdin);
        list[i][strcspn(list[i], "\n")] = '\0';
        list[i][strcspn(list[i], "\r")] = '\0';
        len = strlen(list[i]);
        if (len < minlen)
        {
            minlen = len;
            mini = i;
        }
    }
    printf("%s\n", list[mini]);
    return 0;
}