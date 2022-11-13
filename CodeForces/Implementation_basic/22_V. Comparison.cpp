#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    int a ,b;
    char s;
    while (cin >> a >> s >> b)
    {
        if((s=='>' && a>b)||(s=='<' && a<b)||(s=='=' && a==b))
        {
            cout << "Right" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
            break;
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

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