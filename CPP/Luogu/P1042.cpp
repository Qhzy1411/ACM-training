// Author: QHZY
// Create_Time: 2024/12/06 16:28:49
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6;
int scores[63000];
int main()
{
    int i = 0;
    char input = getchar();
    while (input != 'E')
    {
        if (input == 'W')
            scores[i++] = 1;
        else if (input == 'L')
            scores[i++] = 2;
        input = getchar();
    }
    int w = 0, l = 0;
    for (i = 0;; i++)
    {
        if (scores[i] == 1)
            w++;
        else if (scores[i] == 2)
            l++;
        else if (scores[i] == 0)
        {
            printf("%d:%d\n\n", w, l);
            w = l = 0;
            break;
        }
        if (w > l + 1 || l > w + 1)
        {
            if (w > 10 || l > 10)
            {
                printf("%d:%d\n", w, l);
                w = l = 0;
            }
        }
    }
    for (i = 0;; i++)
    {
        if (scores[i] == 1)
            w++;
        else if (scores[i] == 2)
            l++;
        else if (scores[i] == 0)
        {
            printf("%d:%d\n", w, l);
            break;
        }
        if (w > l + 1 || l > w + 1)
        {
            if (w > 20 || l > 20)
            {
                printf("%d:%d\n", w, l);
                w = l = 0;
            }
        }
    }
    return 0;
}