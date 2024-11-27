#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 'A' && x <= 'Z' || x >= 'a' && x <= 'z')
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}