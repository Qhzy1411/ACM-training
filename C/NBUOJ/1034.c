#include <stdio.h>
int main()
{
    int input, count;
    count = 0;
    scanf("%d", &input);
    do
    {
        input /= 10;
        count++;
    } while (input != 0);
    printf("%d\n", count);
    return 0;
}