#include <stdio.h>
int main()
{
    int head, foot, chicken, rabbit;
    scanf("%d%d", &head, &foot);
    if (foot % 2 != 0)
    {
        printf("NO answer\n");
        return 0;
    }
    rabbit = (foot - head * 2) / 2;
    chicken = head - rabbit;
    if (rabbit < 0 || chicken < 0)
        printf("NO answer\n");
    else
        printf("%d %d\n", chicken, rabbit);
    return 0;
}