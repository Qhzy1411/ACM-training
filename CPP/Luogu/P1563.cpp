// Author: QHZY
// Create_Time: 2024/12/06 17:35:29
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 10;
struct person
{
    int direction;
    string name;
} p[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> p[i].direction >> p[i].name;
    int id = 0;
    while (m--)
    {
        int a, s;
        cin >> a >> s;
        if ((a == 0 && p[id].direction == 1) || (a == 1 && p[id].direction == 0))
            id = (id + s) % n;
        else
            id = (id + n - s) % n;
    }
    cout << p[id].name << endl;
    return 0;
}