#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int p[n];
    for (int i = 1; i < n; i++)
    {
        p[0] = b[0];
        p[i] = p[i-1] - a[i] + b[i];
    }
    cout << *max_element(p, p + n);

    return 0;
}