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
        long long n, s;
        int count = 0;
        cin >> n;
        for (int i = 1; i <= 9; i++)
        {
            s = i;
            while (s <= n)
            {
                count++;
                s = s * 10 + i;
            }
        }
        cout << count << endl;
    }

    return 0;
}