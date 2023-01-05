#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    int a = 4, b = 7;
    int max;
    (a > b) ? max = a : max = b;
    cout << max << endl;
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