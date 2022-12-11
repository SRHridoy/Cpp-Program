//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include"bits/stdc++.h"
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
#define fo(i, n)          for(int i = 0; i <n; i++)
using namespace std;

void solve()
{
    int n; cin >> n;

    int a = n, b = n, c = n;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0)
        {
            a = i;
            break;
        }
    }
    
    n = n / a;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            if(i != a)
            {
                b = min(b,i);
            }
            if((n/i)!=i)
            {
                if((n/i)!=a)
                {
                    b = min(b,n/i);
                }
            }
        }
    }

    c = n / b;
    if(a!=b && b!=c && c!= a && c>1)
        cout << "YES" << endl << a << " " << b << " " << c << endl;
    else
        cout << "NO" << endl;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // t = 1;
    //int cs = 1;
    cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}