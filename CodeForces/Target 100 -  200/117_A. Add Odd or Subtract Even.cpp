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
    int a, b;
    cin >> a >> b;

    if(a == b)
        cout << 0 << endl;
    else if((a%2==0 && b%2==0 && a>b) || (a%2!=0 && b%2!=0 && a > b))
        cout << 1 << endl;
    else if((a%2==0 && b%2!=0 && a<b) || (a%2!=0 && b%2==0 && a<b))
        cout << 1 << endl;
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