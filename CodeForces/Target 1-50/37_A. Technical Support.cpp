#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string str;
    while (t--)
    {
        int n;
        cin >> n;
        cin >> str;
        int countNet = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'Q')
            {
                countNet++;
            }
            else
            {
                countNet--;
            }
            countNet = max(countNet, 0);
            cout << countNet << endl;
        }
        if (countNet == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}