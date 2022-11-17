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
    vector<int>v(n);
    int cnt_odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] % 2 != 0)
            cnt_odd++;
    }
    
    if(n%2==0 && cnt_odd == n)
        cout << "NO"<< endl;
    else if(cnt_odd>0)
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
    // int cs = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case-#" << cs <<": ";
        solve();
        // cs++;
    }
}