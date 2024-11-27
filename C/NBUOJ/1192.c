#include <stdio.h>
#define N 1000
int Josephus(int n)
{
    int list[N] = {0}, count = -1, i, num = 0;
    for (i = 0; i < n; i++)
        list[i] = 1;
    i = 0;
    while (num < (n - 1))
    {
        i++;
        count = (count + 1) % n;
        while (list[count] == 0)
            count = (count + 1) % n;
        if (i == 3)
        {
            i = 0;
            list[count] = 0;
            num++;
        }
    }
    while (list[count] == 0)
        count = (count + 1) % n;
    count++;
    if (!count)
        return 1;
    return (count);
}
int main()
{
    int input;
    scanf("%d", &input);
    printf("%d\n", Josephus(input));
    return 0;
}