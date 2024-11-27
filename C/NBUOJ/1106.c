#include <stdio.h>
int main()
{
    int list[12] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600};
    int input, i;
    for (; scanf("%d", &input) != EOF;)
    {

        if (input == 0)
        {
            printf("NO\n");
            continue;
        }
        for (i = 11; i >= 0; i--)
        {
            if (input >= list[i])
                input -= list[i];
        }
        if (input == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}