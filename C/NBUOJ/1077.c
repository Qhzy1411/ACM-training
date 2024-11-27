#include <stdio.h>
int main()
{
    int input, x[4], n, temp;
    scanf("%d", &input);
    x[3] = input % 10;
    x[2] = input / 10 % 10;
    x[1] = input / 100 % 10;
    x[0] = input / 1000;
    for (n = 0; n < 4; n++)
        x[n] = (x[n] + 9) % 10;
    temp = x[3];
    x[3] = x[1];
    x[1] = temp;
    temp = x[2];
    x[2] = x[0];
    x[0] = temp;
    for (n = 0; n < 4; n++)
        printf("%d", x[n]);
    printf("\n");
    return 0;
}