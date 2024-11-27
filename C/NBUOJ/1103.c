#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 252)
        printf("123+45+67+8+9=252\n");
    else if (n == 234)
        printf("123+45+67+8-9=234\n");
    else if (n == 236)
        printf("123+45+67-8+9=236\n");
    else if (n == 218)
        printf("123+45+67-8-9=218\n");
    else if (n == 118)
        printf("123+45-67+8+9=118\n");
    else if (n == 100)
        printf("123+45-67+8-9=100\n");
    else if (n == 102)
        printf("123+45-67-8+9=102\n");
    else if (n == 84)
        printf("123+45-67-8-9=84\n");
    else if (n == 162)
        printf("123-45+67+8+9=162\n");
    else if (n == 144)
        printf("123-45+67+8-9=144\n");
    else if (n == 146)
        printf("123-45+67-8+9=146\n");
    else if (n == 128)
        printf("123-45+67-8-9=128\n");
    else if (n == 28)
        printf("123-45-67+8+9=28\n");
    else if (n == 10)
        printf("123-45-67+8-9=10\n");
    else if (n == 12)
        printf("123-45-67-8+9=12\n");
    else if (n == -6)
        printf("123-45-67-8-9=-6\n");
    else
        printf("impossible\n");
    return 0;
}