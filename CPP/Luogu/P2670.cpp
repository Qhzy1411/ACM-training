// Author: QHZY
// Create_Time: 2024/12/06 16:42:13
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 110;
char ans[N][N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> ans[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (ans[i][j] == '*')
                continue;
            int temp = 0;
            for (int dx = -1; dx <= 1; dx++)
                for (int dy = -1; dy <= 1; dy++)
                {
                    int nx = i + dx, ny = j + dy;
                    if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                        continue;
                    if (ans[nx][ny] == '*')
                        temp++;
                }
            ans[i][j] = '0' + temp;
        }
    for (int i = 0; i < n; i++)
        cout << ans[i] << endl;
    return 0;
}