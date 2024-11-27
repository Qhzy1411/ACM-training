#include <stdio.h>
int main()
{
    double input, output;
    scanf("%lf", &input);
    if (input < 500)
        output = input;
    else if (input < 1000)
        output = input * 0.95;
    else if (input < 3000)
        output = input * 0.9;
    else if (input < 5000)
        output = input * 0.85;
    else
        output = input * 0.8;
    printf("%.2f\n", output);
    return 0;
}