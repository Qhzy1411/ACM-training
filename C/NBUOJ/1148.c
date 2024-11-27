#include <stdio.h>
int main()
{
    char input;
    int num[10] = {0}, i;
    input = getchar();
    while (!(input == '\n' || input == '\r'))
    {
        switch (input)
        {
        case '0':
            num[0]++;
            break;
        case '1':
            num[1]++;
            break;
        case '2':
            num[2]++;
            break;
        case '3':
            num[3]++;
            break;
        case '4':
            num[4]++;
            break;
        case '5':
            num[5]++;
            break;
        case '6':
            num[6]++;
            break;
        case '7':
            num[7]++;
            break;
        case '8':
            num[8]++;
            break;
        case '9':
            num[9]++;
            break;
        default:
            break;
        }
        input = getchar();
    }
    for (i = 0; i <= 9; i++)
    {
        if (num[i] != 0)
            printf("%d:%d\n", i, num[i]);
    }
    return 0;
}