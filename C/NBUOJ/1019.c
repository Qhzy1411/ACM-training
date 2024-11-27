#include <stdio.h>
#define RATE 6.5573
int main()
{
    double input;
    scanf("%lf", &input);
    printf("%.2f\n", input * RATE);
    return 0;
}