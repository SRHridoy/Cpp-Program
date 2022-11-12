#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll n;
    cin >> n;

    ll ans = (n*(n+1))/2;
    cout << ans << nl;


    return 0;
}