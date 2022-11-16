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
    /*
    int a[10];
    a[11] = 4;
    //*** stack smashing detected ***: terminatedAborted (core dumped)
    cout << a[11];
    */

    // 2D array-->
    int n, m;
    cin >> n >> m;
    int a[n][m];
    // taking input-->
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    // printing output-->
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    // int cs = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case-#" << cs <<": ";
        solve();
        // cs++;
    }
}