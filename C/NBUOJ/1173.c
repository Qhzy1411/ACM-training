#include <stdio.h>
#define N 1000
int main()
{
    int num, n, i, p1, p2;
    char result[N] = {'\0'}, list[] = "0123456789ABCDEF", temp;
    scanf("%d%d", &num, &n);
    for (i = 0; num > 0; i++)
    {
        result[i] = list[num % n];
        num /= n;
    }
    p2 = i - 1;
    p1 = 0;
    while (p1 < p2)
    {
        temp = result[p2];
        result[p2] = result[p1];
        result[p1] = temp;
        p1++;
        p2--;
    }
    for (temp = 0; temp < i; temp++)
        printf("%c ", result[temp]);
    putchar('\n');
    return 0;
}