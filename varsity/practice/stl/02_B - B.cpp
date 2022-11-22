//       *Author: Md Sohanur Rahman Hridoy* ​

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
    int N, q, query, t, x;
    cin >> N >> q;
    vector<vector<int> > c(N, vector<int>(0));
    for (int i = 0; i < q; ++i) {
        cin >> query >> t;
        if (query == 0) {
            cin >> x;
            c[t].push_back(x);
        } else if (query == 1) {
            for(int j = 0; j < c[t].size(); ++j) {
                cout << c[t][j] << (j + 1 == c[t].size() ? "" : " ");;
            }
            cout << endl;
        } else {
            c[t].clear();            
        }
    }
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}