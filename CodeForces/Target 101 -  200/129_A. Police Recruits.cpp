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
    int in,sum = 0,cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        sum+=in;
        if(sum < 0)
        {
            cnt++;
            sum = 0;
        }
    }
    cout << cnt << endl;
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