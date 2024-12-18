// Author: QHZY
// Create_Time: 2024/12/06 20:34:15
// ChatGPT
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, k, a, b, x, y;
int solve()
{
    vector<bool> visited(n + 1, false);
    queue<pair<int, int>> q;
    q.emplace(a, 0);
    visited[a] = true;
    while (!q.empty())
    {
        auto [pos, steps] = q.front();
        q.pop();
        if (pos == b)
            return steps;
        int next_pos = (pos + x - 1) % n + 1;
        if (!visited[next_pos])
        {
            visited[next_pos] = true;
            q.emplace(next_pos, steps + 1);
        }
        next_pos = (pos - y - 1 + n) % n + 1;
        if (!visited[next_pos])
        {
            visited[next_pos] = true;
            q.emplace(next_pos, steps + 1);
        }
        if (k > 0)
        {
            next_pos = (pos + n / 2 - 1) % n + 1;
            if (!visited[next_pos])
            {
                visited[next_pos] = true;
                q.emplace(next_pos, steps + 1);
            }
            k--;
        }
    }
    return -1;
}
int main()
{
    cin >> n >> k >> a >> b >> x >> y;
    cout << solve() << endl;
    return 0;
}