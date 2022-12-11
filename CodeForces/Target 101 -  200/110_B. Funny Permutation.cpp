#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    if (n == 3)
    {
        cout << "-1" << endl;
        return;
    }

    if (n % 2 == 0)
    {
        reverse(v.begin(), v.end());
        for(auto it:v)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        reverse(v.begin(), v.end());
        reverse(v.begin()+(n/2),v.end());
        for(auto it:v)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
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