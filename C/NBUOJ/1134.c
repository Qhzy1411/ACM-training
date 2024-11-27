#include <stdio.h>
int main()
{
    int a, b, c, abc, cba, n, flag = 1;
    scanf("%d", &n);
    for (a = 0; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            for (c = 9; c >= 0; c--)
            {
                abc = a * 100 + b * 10 + c;
                cba = c * 100 + b * 10 + a;
                if (abc + cba == n)
                {
                    printf("a=%d,b=%d,c=%d\n", a, b, c);
                    flag = 0;
                }
            }
        }
    }
    if (flag)
        printf("No Solution\n");
    return 0;
}