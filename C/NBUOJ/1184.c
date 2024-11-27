#include <stdio.h>
#include <string.h>
#define N 10
int main()
{
    char str1[N], str2[N];
    scanf("%s%s", &str1, &str2);
    if (strcmp(str1, str2) > 0)
        printf("%s\n%s\n", str2, str1);
    else
        printf("%s\n%s\n", str1, str2);
    return 0;
}