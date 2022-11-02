// Given N  strings, print uniqe strings in lexiographical order with their frequency.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto ans : m)
    {
        cout << ans.first << " " << ans.second << endl;
    }

    return 0;
}