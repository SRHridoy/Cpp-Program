#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int cost = k;

    for (int i = 2; i <= w; i++)
    {
        cost += k * i;
    }
    if (cost > n)
    {
        cout << (cost - n);
    }
    else
        cout << 0;

    return 0;
}