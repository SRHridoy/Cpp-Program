#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            if (i == n || k == 1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        for (int L = (i - 1); L >= 1; L--)
        {
            if (L == 1 || i == n)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        cout << nl;
    }

    return 0;
}