#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    printf("%.1f\n", (90 - 0.1 * a - 0.3 * b) / 0.6);
    return 0;
}