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
    int x =4;
    int  *p_x = &x;

    cout << "Address of x : " << &x << endl;
    cout << "Value of p_x : " << p_x << endl;
    cout << "Value of *p_x : " << *p_x << endl;
    *p_x = 5;
    cout << "x: " << x << endl;
    cout << "p-x + 1: " << p_x + 1 << endl;
    
    int **p_p_x = &p_x;
    cout << "Address of p_x : " << &p_x << endl;
    cout << " value of p_p_x : " << p_p_x << endl;
    cout << " value of *p_p_x : " << *p_p_x << endl;
    cout << " value of **p_p_x : " << **p_p_x << endl;
    **p_p_x = 8;
    cout << "x: " << x << endl;


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