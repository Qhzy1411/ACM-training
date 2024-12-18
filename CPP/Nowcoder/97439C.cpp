// Author: QHZY
// Create_Time: 2024/12/06 19:21:40
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 510;
int ans[N][N], dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> ans[i + 1][j + 1];
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < n + 1; j++)
        {
            if (ans[i][j] == 0)
                continue;
            else if (ans[i][j] > 0)
                for (int k = 0; k < 4; k++)
                {
                    if (ans[i + dx[k]][j + dy[k]] > 0)
                    {
                        cout << "NO";
                        return 0;
                    }
                }
            else if (ans[i][j] < 0)
                for (int k = 0; k < 4; k++)
                {
                    if (ans[i + dx[k]][j + dy[k]] < 0)
                    {
                        cout << "NO";
                        return 0;
                    }
                }
        }
    cout << "YES";
    return 0;
}