#include <stdio.h>
int main()
{
    int t1, t2;
    scanf("%d%d", &t1, &t2);
    for (int i = t1; i <= t2; i += 10)
        printf("%d %.2f\n", i, i * 0.3937);
    return 0;
}