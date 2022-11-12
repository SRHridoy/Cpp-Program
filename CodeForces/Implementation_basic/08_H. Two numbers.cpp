#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    float a,b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b<< " = " << floor(a/b)<<nl;
    cout << "ceil " << a << " / " << b<< " = " << ceil(a/b)<<nl;
    cout << "round " << a << " / " << b<< " = " << round(a/b)<<nl;


    return 0;
}