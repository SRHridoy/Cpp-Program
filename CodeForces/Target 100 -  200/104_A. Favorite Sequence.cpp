#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            v.push_back(in);
        }
        if (n == 1)
        {
            cout << v[0] << nl;
        }

        vector<int> v2;
        for (int i = 0; i < (n / 2); i++)
        {
            v2.push_back(v[i]);

            v2.push_back(v[n - i - 1]);

            if (n % 2 != 0 && i == n / 2 - 1)
            {
                v2.push_back(v[n / 2]);
                break;
            }
        }
        for (auto it : v2)
            cout << it << " ";
        cout << nl;
        v2.clear();
        v.clear();
    }

    return 0;
}