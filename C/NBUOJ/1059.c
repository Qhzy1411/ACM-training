#include <stdio.h>
int main()
{
    int grade;
    scanf("%d", &grade);
    if (grade >= 80 && grade <= 100)
        printf("A\n");
    else if (grade >= 60 && grade <= 79)
        printf("B\n");
    else if (grade >= 0 && grade <= 59)
        printf("C\n");
    return 0;
}