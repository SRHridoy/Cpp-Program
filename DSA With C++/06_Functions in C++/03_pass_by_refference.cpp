#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

void changeValue(int &z, int &y)
{
    z = 100;
    y = 99;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a = 5;
    int b = 6;
    changeValue(a,b);
    cout << a << " " << b << nl;

    // int p = 5;
    // int &q = p;

    // q++;
    // cout << p << nl;
    // cout << &p << nl;
    // cout << &q << nl;


    return 0;
}