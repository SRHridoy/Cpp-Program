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
    int n;
    cin >> n;
    set<int>per;
    vector<int>ans;
    for (int i = 0; i < 2*n; i++)
    {
        int x;
        cin >> x;
        if(per.find(x)==per.end())
        {
            per.insert(x);
            ans.pb(x);
        }
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