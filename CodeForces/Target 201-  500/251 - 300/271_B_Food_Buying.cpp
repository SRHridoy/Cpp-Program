//       *Author: Md Sohanur Rahman Hridoy* ​

// In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include "bits/stdc++.h"
#define int long long
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
    int s;
    cin >> s;
    int max = 0;
    int instinct = 0;
    while (s > 9)
    {
        max += (s / 10) * 10;
        int temp = s / 10;
        // cout<<"the value of the cashback is "<<temp<<"\n";
        s -= (s / 10) * 10;
        s += temp;
        // cout<<"the value of s after all that is "<<s<<"\n";
        // cout<<"the value of max after all that is "<<max<<"\n";
        instinct = s;
    }
    max += s;
    cout << max << "\n";
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