#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int y = n/365;
    n-=y*365;
    int m = n/30;
    n-=m*30;
    int d = n;
    cout << y << " years" << endl << m << " months"  << endl << d << " days" << endl;
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