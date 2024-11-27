#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 1)
        printf("odd\n");
    else
        printf("even\n");
    return 0;
}