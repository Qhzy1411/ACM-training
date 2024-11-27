#include <stdio.h>
#include <string.h>
#define N 1001
int main()
{
    char str[N] = {'\0'};
    int n, sum1 = 0, sum2 = 0, sum3 = 0, i;
    for (i = 0; i < 3; i++)
    {
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;
        for (n = 0; str[n] != '\0'; n++)
        {
            if (str[n] >= 'A' && str[n] <= 'Z')
                sum1++;
            else if (str[n] >= 'a' && str[n] <= 'z')
                sum2++;
            else if (str[n] >= '0' && str[n] <= '9')
                sum3++;
        }
    }
    printf("%d %d %d\n", sum1, sum2, sum3);
    return 0;
}