#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << nl;
    }

    return 0;
}