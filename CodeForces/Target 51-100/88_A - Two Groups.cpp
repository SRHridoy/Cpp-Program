#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            ans += num;
        }

        cout << abs(ans) << endl;
    }

    return 0;
}