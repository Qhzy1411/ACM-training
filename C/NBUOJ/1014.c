#include <stdio.h>
int main()
{
    int head, foot, chicken, rabbit;
    scanf("%d%d", &head, &foot);
    rabbit = (foot - head * 2) / 2;
    chicken = head - rabbit;
    printf("%d %d\n", chicken, rabbit);
    return 0;
}