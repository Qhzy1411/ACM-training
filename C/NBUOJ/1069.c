#include <stdio.h>
int main()
{
    double v;
    scanf("%lf", &v);
    if (v < 11.19)
        printf("1\n");
    else if (v < 16.67)
        printf("2\n");
    else
        printf("3\n");
    return 0;
}