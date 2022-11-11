#include <bits/stdc++.h>
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

    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll value;
        cin >> value;
        v.push_back(value);
    }
    // cout << v[0] << nl

    for (ll i = 0; i < v.size(); i++)
    {
        int cnt = 2;
        bool flag = true;
        for (ll j = v[i] - 1; j >= 2; j++)
        {
            if (v[i] % j == 0)
            {
                cnt++;
                // cout << v[i] << "-->" << j << "count -->" << cnt << nl;
                if (cnt > 3)
                {
                    cout << "NO" << nl;
                    flag = false;
                    break;
                }
            }
        }

        if (cnt == 3 && flag == true)
            cout << "YES" << nl;
        else if (cnt < 3 && flag == true)
            cout << "NO" << nl;
    }

    return 0;
}