#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

bool isPrimeOptimize(int num)
{
    //i^2 <= num --> i <= sqrt(num)
    for (int i = 2; i*i <= num; i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
    
}

void solve()
{
    int a = 2, b = 40;
    for (int i = a; i <= b; i++)
    {
        if (isPrimeOptimize(i))
        {
            cout << i << " ";
        }
        
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