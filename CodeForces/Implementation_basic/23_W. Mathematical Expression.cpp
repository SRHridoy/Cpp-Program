#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    int a,b,c;
    char s,q;
    cin >> a >> s >> b>> q >> c ;
    if(s=='+' && c==a+b)
    {
        cout << "Yes" << endl;
    }
    else if(s=='+')
    {
        cout << a+b << endl;
    }
    if(s=='-' && c==a-b)
    {
        cout << "Yes" << endl;
    }
    else if(s=='-')
    {
        cout << a-b << endl;
    }
    if(s=='*' && c==a*b)
    {
        cout << "Yes" << endl;
    }
    else if(s=='*')
    {
        cout << a*b << endl;
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