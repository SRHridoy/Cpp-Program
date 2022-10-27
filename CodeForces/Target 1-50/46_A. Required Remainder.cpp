// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//    cin .tie(NULL);
//     int t;
//     cin >> t;

//     long long x, y, n;
//     // int k[n];
//     while (t--)
//     {
//         cin >> x >> y >> n;
//         for (int i = n; i > 0; i--)
//         {
//             int k = i % x;
//             if (y != 0)
//             {
//                 if (k == y)
//                 {
//                     cout << i << endl;
//                     break;
//                 }
//             }
//             else if (y == 0 && i < x)
//             {
//                 cout << 0 << endl;
//                 break;
//             }
//             else if (y == 0 && k == y)
//             {
//                 cout << i << endl;

//                 break;
//             }
//         }
//     }

//     return 0;
// }
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
        int x, y, n;
        cin >> x >> y >> n;
        if (n - n % x + y <= n)
        {
            cout << n - n % x + y << endl;
        }
        else
        {
            cout << n - n % x - (x - y) << endl;
        }
    }

    return 0;
}