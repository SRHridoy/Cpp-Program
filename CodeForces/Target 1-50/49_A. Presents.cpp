#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int pi[n];
    int temp;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        pi[temp] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << pi[i] << " ";
    }

    return 0;
}