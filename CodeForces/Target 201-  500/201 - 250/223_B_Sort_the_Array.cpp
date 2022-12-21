#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l = 1, r = 1;
    cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        if (a[i + 1] < a[i])
        {
            l = i;
            break;
        }
    }

    for (int i = 1; i <= n; i++)
        if (a[i - 1] > a[i])
            r = i;

    reverse(a.begin() + l, a.begin() + r + 1);

    for (int i = 1; i <= n; i++)
        if (a[i - 1] > a[i])
            return cout << "no", 0;

    cout << "yes\n"
         << l << " " << r;
}