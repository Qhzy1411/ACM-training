#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    printf("%d ", input % 100 % 10);
    printf("%d ", input / 10 % 10);
    printf("%d\n", input / 100);
    return 0;
}