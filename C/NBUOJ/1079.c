#include <stdio.h>
int main()
{
    double open, close, high, low;
    scanf("%lf%lf%lf%lf", &open, &high, &low, &close);
    if (open == close)
        printf("cross red candle");
    else if (open < close)
        printf("hollow red candle");
    else
        printf("solid blue and white candle");
    if (high > open && high > close)
        printf(",upper shadow");
    if (low < open && low < close)
        printf(",lower shadow");
    printf("\n");
    return 0;
}