#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{
    char list[N] = {'\n'};
    int i, n, key;
    fgets(list, sizeof(list), stdin);
    list[strcspn(list, "\n")] = '\0';
    list[strcspn(list, "\r")] = '\0';
    scanf("%d", &key);
    key--;
    n = strlen(list);
    for (i = 0; i < n; i++)
    {
        if (i == key)
            continue;
        printf("%c", list[i]);
    }
    putchar('\n');
    return 0;
}