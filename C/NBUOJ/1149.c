#include <stdio.h>
int main()
{
    double score[4], sum = 0;
    int i;
    for (i = 0; i < 4; i++)
    {
        scanf("%lf", &score[i]);
        sum += score[i];
    }
    sum /= 4;
    printf("%.1f\n", sum);
    return 0;
}