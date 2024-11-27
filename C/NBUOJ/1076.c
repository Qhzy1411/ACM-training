#include <stdio.h>
int main()
{
    int a, b, output;
    scanf("%d%d", &a, &b);
    output = a * a + b * b;
    if (output >= 100)
        output /= 100;
    printf("%d\n", output);
    return 0;
}