#include <stdio.h>
#include <string.h>
#define N 200
int main()
{
    char list[N];
    int i;
    scanf("%s", &list);
    for (i = 0; list[i] != '\0'; i++)
    {
        if (list[i] == '0')
            list[i] = '1';
        else if (list[i] == '1')
            list[i] = '0';
    }
    printf("%s\n", list);
    return 0;
}