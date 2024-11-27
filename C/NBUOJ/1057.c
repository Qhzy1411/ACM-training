#include <stdio.h>
#define N 1001
int main()
{
    char input[N];
    int n;
    gets(input);
    for (n = 0; input[n] != '\0'; n++)
    {
        if (input[n] >= 'a' && input[n] <= 'z')
            input[n] -= 32;
        else if (input[n] >= 'A' && input[n] <= 'Z')
            input[n] += 32;
    }
    puts(input);
    printf("\n");
    return 0;
}