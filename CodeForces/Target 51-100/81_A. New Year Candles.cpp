#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int rem = 0;
    int ans = 0;
    while (n != 0)
    {
        ans += n;
        rem += n;
        n = rem / m;
        rem = rem % m;
    }
    cout << ans << endl;

    return 0;
}