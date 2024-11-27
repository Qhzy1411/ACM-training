#include <stdio.h>
int main()
{
    int year, day, month, flag = 0;
    int dayofmonth0[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, dayofmonth1[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d", &year, &day);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        flag = 1;
    if (flag)
    {
        for (month = 0; day > dayofmonth1[month]; month++)
            day -= dayofmonth1[month];
    }
    else
    {
        for (month = 0; day > dayofmonth0[month]; month++)
            day -= dayofmonth0[month];
    }
    month++;
    printf("%d-%d-%d\n", year, month, day);
    return 0;
}