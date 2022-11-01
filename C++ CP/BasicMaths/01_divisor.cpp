#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define ld long double;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int cnt = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n%i==0)
    //     {
    //         cnt++;
    //     }

    // }

    // Efficient-->
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (i != n / i)
            {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}