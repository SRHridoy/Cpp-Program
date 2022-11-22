//          ***Md Sohanur Rahman Hridoy*** ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include<bits/stdc++.h>
#define int               long long
#define pb                emplace_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        v.pb(in);
    }
    
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]>0)
            pos+=v[i];
        else
            neg+=v[i];
    }
    cout << pos-(neg) << endl;
    
    
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