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
    int s, t, k = 1, m = 1;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        if (t >= s)
            k++;
        else
        {
            k = 1;
        }
        if (k > m)
            m = k;
        s = t;
    }
    cout << m;

    return 0;
}