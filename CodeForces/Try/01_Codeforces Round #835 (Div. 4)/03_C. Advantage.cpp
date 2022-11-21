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
    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        v.pb(in);
    }

    int maxi = *max_element(v.begin(),v.end());
    // cout << maxi << endl;
    int cntMaxi = count(v.begin(),v.end(),maxi);
    // cout << cntMaxi << endl;

    int maxi2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if((v[i]>maxi2) && (v[i] != maxi))
            maxi2 = v[i];
    }
    // cout << maxi2 << endl;
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        if(v[i] != maxi)
            ans.pb(v[i]-maxi);
        else if((maxi = v[i]) && (cntMaxi > 1))
            ans.pb(0);
        else if(maxi2>0)
            ans.pb(maxi-maxi2);
        else 
            ans.pb(0);
    }
    
    for(auto it:ans)
        cout << it << " ";
    cout << endl;
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