#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // int n=s.size();
        int sumF = 0, sumL = 0;
        for (int i = 0; i < 3; i++)
            sumF += s[i];
        for (int i = 3; i < 6; i++)
            sumL += s[i];
        if (sumF == sumL)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}