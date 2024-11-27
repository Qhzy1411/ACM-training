#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{
    char list[N] = {'\0'}, key;
    int i, n, count = 0;
    fgets(list, sizeof(list), stdin);
    list[strcspn(list, "\n")] = '\0';
    list[strcspn(list, "\r")] = '\0';
    n = strlen(list);
    scanf("%c", &key);
    for (i = 0; i < n; i++)
    {
        if (list[i] == key)
            count++;
    }
    printf("%d\n", count);
    for (i = 0; i < n; i++)
    {
        if (list[i] == key)
            printf("%d\n", i + 1);
    }
    return 0;
}