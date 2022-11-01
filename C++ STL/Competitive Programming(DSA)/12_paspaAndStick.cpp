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

    long long int n;
    cin >> n;

    long long int cnt = 0;
    if (n % 2 != 0)
    {
        cout << 0;
    }
    else if (n % 4 == 0)
    {
        cout << n / 4 - 1;
    }

    else
    {
        // for (long long  int i = 1; i <= n-1; i++)
        // {
        //     for (long long int j = 2; j <=n-2; j++)
        //     {
        //         if ((i+j)*2==n&&(i<j))
        //         {
        //             cnt++;
        //             // cout << "i--> " << i << " j-->" << j << " i+j*2-->" << (i+j)*2 << endl;
        //         }
        //         else
        //             continue;

        //     }

        // }
        cout << n / 4;
    }

    // cout << cnt;

    return 0;
}