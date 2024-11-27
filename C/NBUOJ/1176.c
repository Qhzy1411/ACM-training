#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{
    char list[N] = {'\0'};
    int space = 1, i, count = 0;
    fgets(list, sizeof(list), stdin);
    list[strcspn(list, "\n")] = 0;
    for (i = 0; list[i] != '\0'; i++)
    {
        if (list[i] == ' ')
            space = 1;
        else if (list[i] != ' ' && space)
        {
            count++;
            space = 0;
        }
    }
    printf("%d\n", count);
    return 0;
}