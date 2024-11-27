#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, output;
    scanf("%d%d", &x, &y);
    output = pow(x, y);
    printf("%d %d\n", output, output % 1000);
    return 0;
}