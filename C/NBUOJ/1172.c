#include <stdio.h>
#define N 1000
int main()
{
    int input, i, p1, p2, temp;
    int _8[N] = {0};
    scanf("%d", &input);
    for (i = 0; input > 0; i++)
    {
        _8[i] = input % 8;
        input /= 8;
    }
    p2 = i - 1;
    p1 = 0;
    while (p1 < p2)
    {
        temp = _8[p2];
        _8[p2] = _8[p1];
        _8[p1] = temp;
        p1++;
        p2--;
    }
    for (temp = 0; temp < i; temp++)
        printf("%d ", _8[temp]);
    putchar('\n');
    return 0;
}