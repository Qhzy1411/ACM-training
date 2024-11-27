#include <stdio.h>
int main()
{
    int k1, k2, i, ab, cd;
    scanf("%d%d", &k1, &k2);
    for (i = k1; i <= k2; i++)
    {
        ab = i / 100;
        cd = i % 100;
        if ((ab + cd) * (ab + cd) == i)
            printf("%d\n", i);
    }
    return 0;
}