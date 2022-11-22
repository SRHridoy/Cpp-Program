//          ***Md Sohanur Rahman Hridoy*** ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include<bits/stdc++.h>
#define int               long long
#define pb                emplace_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int store[] = { 
                    1,
                    2,
                    4,
                    8,
                    16,
                    32,
                    64,
                    128,
                    256,
                    512,
                    1024,
                    2048,
                    4096,
                    8092,
                    16184,
                    32368,
                    64736,
                    129472,
                    258944,
                    517888,
                    1035776,
                    2071552,
                    4143104,
                    8286208,
                    16572416,
                    33144832,
                    66289664,
                    132579328,
                    265158656,
                    530317312,
                    1060634624,
                    2121269248,
                    4242538496,
                    8485076992,
                    16970153984,
                    33940307968
                };
            cout << store[n] << endl;
    // for (int i = 1; i <=12 ; i++)
    // {
    //     cout << pow(2,i) << "," << endl;
    // }
    // int k = 1;
    // for (int i = 13; i <= 35; i++)
    // {
    //     unsigned int s = pow(2,i)-100*k;
    //     cout << s << "," << endl;
    //     k*=2;
    // }
    
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}