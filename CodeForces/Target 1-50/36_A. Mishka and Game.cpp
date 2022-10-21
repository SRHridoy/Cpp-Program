#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m[n], f[n];
    for (int i = 0; i < n; i++)
    {
        cin >> m[i] >> f[i];
    }

    int countM = 0, countF = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[i] > f[i])
        {
            countM++;
        }
        else if (m[i] < f[i])
        {
            countF++;
        }
    }
    if (countM > countF)
    {
        cout << "Mishka";
    }
    else if (countM < countF)
    {
        cout << "Chris";
    }
    else
        cout << "Friendship is magic!^^";

    return 0;
}