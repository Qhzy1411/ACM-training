// Author: QHZY
// Create_Time: 2024/12/06 19:10:48
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 510;
int ans[N][N] = {0};
int main()
{
    int n, now = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {
            ans[i][j] = ++now;
            if (j < n - 1 && i < n - 1)
                ans[j + 1][i] = now;
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << ans[i][j] << ' ';
        cout << endl;
    }
    return 0;
}