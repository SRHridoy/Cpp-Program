#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }

    cout << "Enter x: ";
    int x;
    cin >> x;

    int occurence = -1;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if(v[i]==x)
    //         occurence = i;
    // }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            occurence = i;
            break;
        }
    }

    cout << occurence << nl;

    return 0;
}