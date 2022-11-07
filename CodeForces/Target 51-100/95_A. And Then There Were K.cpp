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
        int n;
        cin >> n;
        int k = 1;
        while (k <= n)
            k <<= 1;
        cout << (k >> 1) - 1 << endl;
    }
return 0;
}