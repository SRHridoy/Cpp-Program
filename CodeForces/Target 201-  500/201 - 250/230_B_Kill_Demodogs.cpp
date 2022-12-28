#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll modexp(ll a, ll b);
ll sum_square(ll n)
{
    ll ans = (((n * (n + 1)) % mod) * (2 * n + 1) % mod) % mod;
    ;
    ans = (ans * modexp(6, mod - 2)) % mod;

    return ans;
}
ll sum_linear(ll n)
{
    ll ans = (n * (n + 1)) % mod;
    ans = (ans * modexp(2, mod - 2)) % mod;

    return ans;
}
ll modexp(ll a, ll b)
{
    ll ans = 1;

    while (b > 0)
    {
        if ((b % 2) == 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }

    return ans;
}
int main()
{
    ll t, n, ans, i;

    cin >> t;

    for (; t--;)
    {
        cin >> n;

        ans = 0;

        ans = (ans + sum_square(n)) % mod;
        ans = (ans + sum_square(n - 1)) % mod;
        ans = (ans + sum_linear(n - 1)) % mod;
        ans = (ans * 2022) % mod;

        cout << ans << "\n";
    }
}