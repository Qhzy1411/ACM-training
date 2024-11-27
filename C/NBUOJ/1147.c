#include <stdio.h>
int main()
{
    double score[8], sum = 0, max, min;
    int i, maxi, mini;
    for (i = 0; i < 8; i++)
        scanf("%lf", &score[i]);
    max = min = score[0];
    maxi = mini = 0;
    for (i = 1; i < 8; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
            maxi = i;
        }
        else if (score[i] < min)
        {
            min = score[i];
            mini = i;
        }
    }
    score[mini] = score[maxi] = 0;
    for (i = 0; i < 8; i++)
    {
        if (score[i] != 0)
            sum += score[i];
    }
    sum /= 6;
    printf("%.2f\n", sum);
    return 0;
}