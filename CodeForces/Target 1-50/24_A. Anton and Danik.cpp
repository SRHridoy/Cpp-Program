#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string win;
    cin >> win;

    int danikC = 0, antonC = 0;
    for (int i = 0; i < win.size(); i++)
    {
        if (win[i] == 'D')
        {
            danikC++;
        }
        else
        {
            antonC++;
        }
    }

    if (antonC > danikC)
    {
        cout << "Anton";
    }
    else if (antonC < danikC)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}