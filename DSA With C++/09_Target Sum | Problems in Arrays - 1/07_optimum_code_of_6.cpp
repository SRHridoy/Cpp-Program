#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;
    k %= v.size();

    // reversing whole array-->
    reverse(v.begin(), v.end());
    // then reversing reversed first to kth element-->
    reverse(v.begin(), v.begin() + k);
    // then reversing reversed remaing elements-->
    reverse(v.begin() + k, v.end());
    // printing rotated array-->
    for (auto it : v)
        cout << it << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

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