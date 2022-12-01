#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

const int N = 1e3+10;
int a[N][N];//recommended...

void func()
{
    a[0][0] = 200;
}

void solve()
{
//Array ekta data type jeta automatically by refernce pass hoi always...ebong perameter e sudho a[size] ba a[] ar size evabe dia jai...ar multidymentional arrays er khetre 1st dimension er value na dileo hoi baki gula dia must... 
    a[0][0] = 7;
    cout << a[0][0] << endl;
    func();
    cout << a[0][0] << endl;
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