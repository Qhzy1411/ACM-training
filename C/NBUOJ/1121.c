#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        printf("%.0f ", pow(2, i));
    printf("%.0f\n", pow(2, n));
    return 0;
}