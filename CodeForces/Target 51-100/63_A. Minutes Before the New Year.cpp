#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int h, m, hMax = 23, mMax = 60;
    for (int i = 0; i < t; i++)
    {
        cin >> h >> m;
        cout << ((hMax - h) * mMax) + (mMax - m) << endl;
    }

    return 0;
}