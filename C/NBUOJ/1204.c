#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{
    char list[N] = {'\n'};
    int i, n, key1, key2;
    scanf("%d%d", &key1, &key2);
    getchar();
    key1--;
    fgets(list, sizeof(list), stdin);
    list[strcspn(list, "\n")] = '\0';
    list[strcspn(list, "\r")] = '\0';
    n = strlen(list);
    for (i = 0; i < n; i++)
    {
        if (i >= key1 && i < (key1 + key2))
            continue;
        printf("%c", list[i]);
    }
    putchar('\n');
    return 0;
}