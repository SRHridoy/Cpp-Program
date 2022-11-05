#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    // cout << s << endl;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' && s[i]!=s[i+1])
        {
            cnt++;
        }
    }

    if (cnt == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}