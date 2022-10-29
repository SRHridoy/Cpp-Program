#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int n, x;
    while (t--)
    {
        cin >> n >> x;
        if (n <= 2)
            cout << 1 << endl;
        else
            cout << ((n-3)/x)+2 << endl;
        
    }

    return 0;
}