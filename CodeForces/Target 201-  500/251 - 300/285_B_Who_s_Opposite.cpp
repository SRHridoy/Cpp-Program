#include<bits/stdc++.h>
#define ll  long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll n = 2 * abs(a - b);
        if (a > n || b > n || c > n)
            cout << -1 << '\n';
        else
        {
            ll d = n / 2 + c;
            while (d > n) d -= n;
            cout << d << '\n';
        }
    }
    

}