#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < n - 2; ++i)
    {
        if (a[i] == a[i + 1] && a[i + 1] == a[i + 2] && a[i + 2] == 'x')
            count++;
    }
    cout << count << endl;

    return 0;
}