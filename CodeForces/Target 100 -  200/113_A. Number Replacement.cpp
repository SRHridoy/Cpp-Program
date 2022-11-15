#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;

    // array input-->
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // string input-->
    char ch[n];
    for (int i = 0; i < n; i++)
        cin >> ch[i];

    map<int, set<char>> m;

    for (int i = 0; i < n; i++)
        m[v[i]].insert(ch[i]);

    for (auto it : m)
    {
        if (it.second.size() > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // t = 1;
    // int cs = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case-#" << cs <<": ";
        solve();
        // cs++;
    }
}