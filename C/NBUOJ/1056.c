#include <stdio.h>
#define N 1001
int main()
{
    int count = 0, n;
    char input[N] = {'\0'}, key;
    gets(input);
    scanf("%c", &key);
    for (n = 0; input[n] != '\0'; n++)
    {
        if (input[n] == key)
            count++;
    }
    printf("%d\n", count);
    return 0;
}