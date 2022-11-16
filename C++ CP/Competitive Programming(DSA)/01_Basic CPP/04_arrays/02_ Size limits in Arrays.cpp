#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

const int nG = 1e7;
int aG[nG];

void solve()
{
    // int n = 1e7;//Segmentation fault (core dumped)
    // int a[n];
    // a[n-1]=7;
    // cout << a[n-1];

    int n = 1e5;
    int a[n];
    a[n-1]=7;
    cout << a[n-1] << endl;

    aG[nG-1]=1000;
    cout << aG[nG-1];
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