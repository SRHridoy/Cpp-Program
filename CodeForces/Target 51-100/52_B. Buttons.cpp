#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int totalPressed = n;
    for (int i = 0; i < n; i++)
    {
        totalPressed += (n - i) * i;
    }
    cout << totalPressed;

    return 0;
}