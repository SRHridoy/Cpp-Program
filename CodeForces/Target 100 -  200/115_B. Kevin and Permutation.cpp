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
    if (n<=3)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    int first = n/2,last = n;
    if (n&1)
    {
        last--;
    }
    for (int i = 1; i <= n/2; i++)
    {
        cout << first << " " << last << " ";
        first--;
        last--;
    }
    if(n&1)
    {
        cout << n;
    }
    cout << endl;
    return;
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