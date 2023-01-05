#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

bool isOdd(int num)
{
    if(num%2==0)
        return false;
    else
        return true;

}

void solve()
{
    int a = 1, b = 10;
    for(int i = a; i <= b; i++)
    {
        if(isOdd(i))
            cout << i << " ";
    }
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