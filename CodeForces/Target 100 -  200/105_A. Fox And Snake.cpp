#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 1)
                cout << "#";
            else if (i % 4 == 2 && j == m)
                cout << "#";
            else if (i % 4 == 0 && j == 1)
                cout << "#";
            else
                cout << ".";
        }
        cout << nl;
    }

    return 0;
}