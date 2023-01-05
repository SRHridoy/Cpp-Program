// Given an array of integers of size n. Answer q quaries where you need to print the sum of values in a given range of indices from l to r(both included).Note: The values of l and r in queries follow 1-based indexing.

#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define pb push_back
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // calculate prefix sum array-->
    for (int i = 1; i <= n; i++)
        v[i] += v[i - 1];

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int ans = 0;
        // ans = prefixSumArray[r] - prefixSumArray[l-1]...
        ans = v[r] - v[l - 1];
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    // int cs = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case-#" << cs <<": ";
        solve();
        // cs++;
    }
}