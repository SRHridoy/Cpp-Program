#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    ll a, b,c,d;
    cin >> a >>b>>c>>d;
    ll mul = a*b*c*d;
    cout << mul << endl;
    // int ans = mul%100;
    // if(a*b*c*d> INT_MAX)
    //     cout << 00 << endl;
    // else
    //     cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

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