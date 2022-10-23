#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sy;
    cin >> sy;

    sort(sy.begin(), sy.end(), greater<char>());
    // cout <<sy;

    int n = sy.size();
    if (n % 2 != 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            sy.pop_back();
        }
    }
    else
    {
        for (int i = 0; i < (n / 2) - 1; i++)
        {
            sy.pop_back();
        }
    }
    sort(sy.begin(), sy.end());
    // cout << sy << endl;
    for (int i = 0; i < sy.size(); i++)
    {
        cout << sy[i];
        if (i != sy.size() - 1)
        {
            cout << "+";
        }
    }
    return 0;
}