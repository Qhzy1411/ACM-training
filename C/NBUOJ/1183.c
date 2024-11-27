#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    char str1[2 * N] = {'\0'}, str2[N] = {'\0'};
    int i, j;
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\r")] = '\0';
    str1[strcspn(str1, "\n")] = '\0';
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\r")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    for (i = 0; str1[i] != '\0'; i++)
        ;
    for (j = 0; str2[j] != '\0'; j++)
        str1[i + j] = str2[j];
    printf("%s\n", str1);
    return 0;
}