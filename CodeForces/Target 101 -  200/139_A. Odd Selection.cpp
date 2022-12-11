//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include"bits/stdc++.h"
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

void solve()
{
    int n,x;
    cin >> n >> x;

    int even = 0, odd = 0;
    vector<int>v;
    for(int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.pb(ele);

        if(v[i]%2==0)
            even++;
        else
            odd++;
    }

    if(odd==0)
    {
        cout << "No" << endl;
        return;
    }
    for (int i = 1; i <= odd; i+=2)
    {
        if(i>x)
            break;
        if((x-i)<=even)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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