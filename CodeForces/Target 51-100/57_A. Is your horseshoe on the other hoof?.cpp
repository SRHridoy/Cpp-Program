#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> c[i];
    }
    int same = 1;
    sort(c, c + 4);
    for (int i = 0; i < 3; i++)
    {
        if (c[i] == c[i + 1])
            same++;
    }
    // if(same==1 || same==4)
    cout << same - 1;
    // else
    // cout<<same;

    return 0;
}