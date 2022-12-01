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
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        product*=x;
    }
    int last_digit = product % 10;
    if(last_digit == 2 || last_digit == 3 || last_digit == 5)
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