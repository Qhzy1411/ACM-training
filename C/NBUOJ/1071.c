#include <stdio.h>
int main()
{
    int input, n;
    scanf("%d", &input);
    for (n = 35; n < input; n++)
    {
        if (n % 5 == 0 && n % 7 == 0)
            printf("%d ", n);
    }
    printf("\n");
    return 0;
}