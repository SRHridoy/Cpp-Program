#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b>=c && b<d)
        cout << c << " " <<  b << endl;
    else if(b>=c && b>d)
        cout << c << " " << d << endl;
    else if (a == b && b ==c && c==d)
        cout << a << " " << b << endl;
    else if (b==c && c == d)
        cout << b << " " << c << endl;
    else if (b==d && b>c)
        cout << c << " " << b<< endl;
    else
        cout << -1 << endl;
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