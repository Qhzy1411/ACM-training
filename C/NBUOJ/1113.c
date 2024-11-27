#include <stdio.h>
int main()
{
    int n, input, count0 = 0, count1 = 0, count2 = 0, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input);
        if (input == 0)
            count0++;
        else if (input > 0)
            count1++;
        else
            count2++;
    }
    printf("%d\n%d\n%d\n", count1, count2, count0);
    return 0;
}