#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    int a,b,c;
    cin >> a >>b >>c;

    if(a>=b && b>=c)
        cout << c << endl << b << endl << a << endl;
    else if(b>=a && a >=c)
        cout << c << endl << a << endl << b << endl;
    else if(a>=c && c>=b)
        cout << b << endl << c << endl << a << endl;
    else if(c>=a && a>=b)
        cout << b << endl << a << endl << c << endl;
    else if(b>=c && c>=a)
        cout << a << endl << c << endl << b << endl;
    else if(c>=b && b>=a)
        cout << a << endl << b << endl << c << endl;
        
    cout << endl;

    cout << a << endl << b << endl << c << endl;

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