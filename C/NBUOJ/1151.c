#include <stdio.h>
#define N 10
int main()
{
    int input[N] = {0}, i, find, flag = 1;
    for (i = 0; i < 10; i++)
        scanf("%d", &input[i]);
    scanf("%d", &find);
    for (i = 0; i < 10; i++)
    {
        if (input[i] == find)
        {
            printf("%d\n", i);
            flag = 0;
        }
    }
    if (flag)
        printf("not found\n");
    return 0;
}