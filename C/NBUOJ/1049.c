#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
        printf("lower\n");
    else if (x >= 'A' && x <= 'Z')
        printf("upper\n");
    else if (x >= '0' && x <= '9')
        printf("digit\n");
    else
        printf("other\n");
    return 0;
}