#include <stdio.h>
int main()
{
    int n, i, flag = 1;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            flag = 0;
    }
    if (flag)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}