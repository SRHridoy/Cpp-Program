#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a, b, c, d;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (max(a, b) < min(c, d))
            cout << "NO" << endl;
        else if (max(c, d) < min(a, b))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}