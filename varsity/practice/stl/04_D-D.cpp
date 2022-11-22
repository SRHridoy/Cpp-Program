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
    int q; cin >> q;
    map<string, int> ma;
    
    int num,x;
    string key;
    for(int i = 0; i < q; i++)
    {
        cin >> num;
        
        if(num == 0)
        {
            cin >> key >> x;
            ma[key] = x;
        }
        else if(num == 1)
        {
            cin >> key;
            cout << ma[key] << endl;
        }
        else
        {
            cin >> key;
            ma.erase(key);
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