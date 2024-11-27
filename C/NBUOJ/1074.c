#include <stdio.h>
int main()
{
    int y0, y1, m0, m1, d0, d1, age = 0, flag = 0;
    scanf("%d%d%d%d%d%d", &y0, &m0, &d0, &y1, &m1, &d1);
    age = y1 - y0 - 1;
    if (m1 > m0 || m1 == m0 && d1 >= d0)
        age++;
    printf("%d\n", age);
    return 0;
}