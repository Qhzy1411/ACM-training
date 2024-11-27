#include <stdio.h>
int main()
{
    int grade;
    scanf("%d", &grade);
    if (grade >= 60)
        printf("pass\n");
    else
        printf("failure\n");
    return 0;
}