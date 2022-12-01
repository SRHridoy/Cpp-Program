//input-->i love you nova
//output--> I
//LOVE
//YOU
//NOVA

#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

char upper(char c)
{
    return 'A' + (c - 'a');
}

void solve()
{
    while(true)
    {
        string s;
        cin >> s;
        if(s.size()==0)
        {
            break;
        }
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = upper(s[i]);
        }
        cout << s << endl;
    }
    
}

int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

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