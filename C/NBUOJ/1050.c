#include <stdio.h>
#include <string.h>
int main()
{
    char x[1000];
    scanf("%s", &x);
    int y = strlen(x);
    printf("%d\n", y);
    return 0;
}