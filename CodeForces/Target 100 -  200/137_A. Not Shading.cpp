//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include<bits/stdc++.h>
#include<string.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

void solve()
{
    int n,m,r,c;
    cin >> n >> m >> r >> c;

    char s[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> s[i][j];

    if(s[r-1][c-1]=='B')
    {
        //cout << s[r-1] << " " << s[c-1] << endl;
        cout << 0 << endl;
        return;
    }
        
    for (int i = 0; i < m; i++)
    {
        if(s[r-1][i]=='B')
        {
            cout << 1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i][c-1]=='B')
        {
            cout << 1 << endl;
            return;
        }
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(s[i][j]=='B')
            {
                ans = 2;
                break;
            }
        }
        
    }
    if(ans == -1)
        cout << -1 << endl;
    else
        cout << 2 << endl;
    
    
    
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