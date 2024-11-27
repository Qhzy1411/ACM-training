#include <stdio.h>
int main()
{
    int input, clone;
    scanf("%d", &input);
    clone = input;
    while ((clone /= 10) != 0)
        input /= 10;
    printf("%d\n", input);
    return 0;
}