#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

int square(int x)
{
    return x * x;
}

double circumference(int r)
{
    return 2*3.1416*r;
}

double area(int r)
{
    return 3.1416*square(r);
}

void solve()
{
    int r = 3;
    cout << area(r) << " " << circumference(r) << endl;

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