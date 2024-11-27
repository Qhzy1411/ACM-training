#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{
    char list[N] = {'\0'}, input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", output[] = "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";
    int i, j;
    fgets(list, sizeof(list), stdin);
    list[strcspn(list, "\r")] = '\0';
    list[strcspn(list, "\n")] = '\0';
    for (i = 0; list[i] != '\0'; i++)
    {
        if (list[i] >= 'a' && list[i] <= 'z' || list[i] >= 'A' && list[i] <= 'Z')
        {
            for (j = 0; j < 52; j++)
            {
                if (input[j] == list[i])
                {
                    list[i] = output[j];
                    break;
                }
            }
        }
    }
    printf("%s\n", list);
    return 0;
}