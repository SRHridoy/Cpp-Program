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
    int a[10];
    a[0] = 3;
    a[1] = 4;
    cout << "a: " << a << endl;
    cout << "&a[0]: " << &a[0] << endl;
    cout << "*a: " << *a << endl;
    cout << "a + 1: " << a + 1<< endl;
    cout << "&a[1]: " << &a[1]<< endl;
    cout << "*(a+1): "<< *(a+1) << endl;
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