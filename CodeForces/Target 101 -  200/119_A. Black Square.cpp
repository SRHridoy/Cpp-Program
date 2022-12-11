#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1')
            cnt+=a;
        else if(s[i]=='2')
            cnt+=b;
        else if(s[i]=='3')
            cnt+=c;
        else if(s[i]=='4')
            cnt+=d;
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