#include <stdio.h>
#include <string.h>
#define N 101
int main()
{
    char list[N] = {'\0'};
    int n, i;
    fgets(list, sizeof(list), stdin);
    list[strcspn(list, "\n")] = '\0';
    for (n = 0; n < N; n++)
    {
        if (list[n] == '\0')
            break;
    }
    printf("%d ", n);
    for (i = 0; i < n; i++)
        printf("%c", list[i]);
    putchar('\n');
    return 0;
}