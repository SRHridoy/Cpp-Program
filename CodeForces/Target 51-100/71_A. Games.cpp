#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;
    int f[n], s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> f[i] >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && f[i] == s[j])
            {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}