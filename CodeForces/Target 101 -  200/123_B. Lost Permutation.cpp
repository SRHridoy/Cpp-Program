//          ***Md Sohanur Rahman Hridoy*** ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> b(n);
    for (int& x: b) cin >> x, s += x;
    sort(b.begin(), b.end());
    int z = 1;
    while (z*(z+1)/2 < s) z++;
    bool thikAce = 1;
    if (z*(z+1)/2 > s) thikAce = 0;
    if (b.back() > z) thikAce = 0;
    for (int i = 0; i+1 < n; i++)
    {
        if (b[i] == b[i+1]) thikAce = 0;
    }
    if(thikAce)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // t = 1;
    //int cs = 1;
    cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}