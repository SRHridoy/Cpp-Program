#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

int addition(int a, int b)
{
    return a + b;
}

void fun(string name)
{
    cout << "Are you having fun " << name << " ?" << endl;
}

void solve()
{
    fun("Hridoy");
    int response = addition(9,8);
    cout << response;
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