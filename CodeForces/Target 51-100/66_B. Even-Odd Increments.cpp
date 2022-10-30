//Runtime khaisi...

//RTE...
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     int n, q;
//     int a[n], type, x;
//     while (t--)
//     {
//         long long int k = 0;
//         cin >> n >> q;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < q; i++)
//         {
//             cin >> type >> x;
//             if (type == 0)
//             {
//                 k = 0;
//                 for (int i = 0; i < n; i++)
//                 {
//                     if (a[i] % 2 == 0)
//                     {
//                         a[i] += x;
//                         // k += a[i];
//                     }
//                     k+=a[i];
//                 }
//             }
//             else
//             {
//                 k = 0;
//                 for (int i = 0; i < n; i++)
//                 {
//                     if (a[i] % 2 != 0)
//                     {
//                         a[i] += x;
//                     }
//                     k+=a[i];
//                 }
//             }
//             cout << k << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        ll sum = 0ll;
        ll odd = 0ll;
        ll even = 0ll;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        while (q--)
        {
            int type;
            cin >> type;
            if (type == 1)
            {
                ll x;
                cin >> x;
                sum += (x * odd);
                if (x % 2 == 1)
                {
                    even += odd;
                    odd = 0;
                }
            }
            else
            {
                ll x;
                cin >> x;
                sum += (x * even);
                if (x % 2 == 1)
                {
                    odd += even;
                    even = 0;
                }
            }
            cout << sum << "\n";
        }
    }
    return 0;
}