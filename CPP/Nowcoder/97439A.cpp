// Author: QHZY
// Create_Time: 2024/12/06 19:02:46
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6;
int main()
{
    ll a, b, c, d, ans;
    cin >> a >> b >> c >> d;
    if (c == 0)
    {
        if (d % 2 == 0)
            cout << "NO";
        else
            cout << "YES";
    }
    else
    {
        a = a % 2 + 2;
        c = c % 2 + 2;
        d = d % 2 + 2;
        ans = a * c + d;
        if (b == 0)
            ans = 1 * c + d;
        if (ans % 2 == 0)
            cout << "NO";
        else
            cout << "YES";
    }
    return 0;
}