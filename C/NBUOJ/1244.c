#include <stdio.h>
int main()
{
    double x, y, z;
    scanf("%lf%lf%lf", &x, &y, &z);
    if (x + y > z && x + z > y && y + z > x)
    {
        if (x == y && y == z)
            printf("DB\n");
        else if (x == y || y == z || x == z)
            printf("DY\n");
        else if ((x * x + y * y == z * z) || (x * x + z * z == y * y) || (z * z + y * y == x * x))
            printf("ZJ\n");
        else
            printf("OTHER\n");
    }
    else
        printf("NO\n");
    return 0;
}