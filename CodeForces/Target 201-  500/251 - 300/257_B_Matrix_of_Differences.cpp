//       *Author: Md Sohanur Rahman Hridoy* ​

// In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include "bits/stdc++.h"
#define ll long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define endl '\n'
#define all(v) v.begin(), v.end()
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i++ : i--)
using namespace std;

void solve()
{
    int n,i,j,sm,la,m,c;
    cin >> n;
    m = n * n;
    sm = 1;
    la = m;

    ll ans[n + 1][n + 1];

    c = 1;
    for (i = 1; i <= n; i++)
    {
        if ((i % 2) == 1)
        {
            for (j = 1; j <= n; j++)
            {
                if ((c % 2) == 1)
                {
                    ans[i][j] = sm;
                    sm++;
                }
                else
                {
                    ans[i][j] = la;
                    la--;
                }
                c++;
            }
        }
        else
        {
            for (j = n; j >= 1; j--)
            {
                if ((c % 2) == 1)
                {
                    ans[i][j] = sm;
                    sm++;
                }
                else
                {
                    ans[i][j] = la;
                    la--;
                }
                c++;
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
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