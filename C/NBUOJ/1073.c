#include <stdio.h>
int main()
{
    int year, month, flag = 0;
    scanf("%d%d", &year, &month);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        flag = 1;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("31\n");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("30\n");
    else if (month == 2 && !(flag))
        printf("28\n");
    else if (month == 2 && flag)
        printf("29\n");
    return 0;
}