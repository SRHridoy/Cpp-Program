#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    int preSum[n];
    preSum[0] = array[0];

    for (int i = 1; i < n; i++)
        preSum[i] = preSum[i - 1] + array[i];

    int ans = n;

    for (int i = 0; i < n; i++)
    {
        int sum = preSum[i];
        sum += sum;

        int curr = (i + 1), last = i;
        int idx;
        while (binary_search(preSum, preSum + n, sum))
        {
            idx = lower_bound(preSum, preSum + n, sum) - preSum;
            sum += preSum[i];
            curr = max(curr, idx - last);
            last = idx;
        }
        if (last == n - 1)
            ans = min(ans, curr);
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    // t = 1;
    // int cs = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case-#" << cs <<": ";
        solve();
        // cs++;
    }
}