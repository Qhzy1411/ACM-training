// Author: QHZY
// Create_Time: 2024/12/06 18:26:54
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 510;
int main()
{
    char a[N] = {'\0'}, b[N] = {'\0'}, ans[N] = {'\0'};
    cin >> a >> b;
    int length1 = strlen(a), length2 = strlen(b), temp = 0;
    int length = max(length1, length2);
    for (int i = 0; i < length; ++i)
    {
        ans[length - i - 1] = ((length1 - i - 1 >= 0 ? a[length1 - i - 1] - '0' : 0) + (length2 - i - 1 >= 0 ? b[length2 - i - 1] - '0' : 0) + temp) % 10 + '0';
        if ((length1 - i - 1 >= 0 ? a[length1 - i - 1] - '0' : 0) + (length2 - i - 1 >= 0 ? b[length2 - i - 1] - '0' : 0) + temp > 9)
            temp = 1;
        else
            temp = 0;
    }
    if (temp == 1)
        cout << '1' << ans;
    else
        cout << ans;
    return 0;
}