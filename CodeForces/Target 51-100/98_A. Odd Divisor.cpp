#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        while (n % 2 == 0)
        {
            n /= 2;
        }
        if (n > 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}