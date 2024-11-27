#include <stdio.h>
int main()
{
    float denomination[] = {0.1, 0.2, 0.5, 1, 2, 5, 10, 20, 50, 100};
    double sum = 0;
    int serial, num;
    do
    {
        scanf("%d%d", &serial, &num);
        sum += denomination[serial - 1] * num;
    } while (serial >= 0 && num >= 0);
    printf("%.2f\n", sum);
    return 0;
}