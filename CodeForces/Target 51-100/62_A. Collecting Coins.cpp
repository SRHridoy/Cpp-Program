#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a, b, c, n, m, x, y;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> n;

        if (a >= b && a >= c)
            x = (a - b) + (a - c);

        else if (b >= a && b >= c)
            x = (b - a) + (b - c);

        else
            x = (c - b) + (c - a);

        n -= x;
        if (n % 3 == 0 && n / 3 >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}