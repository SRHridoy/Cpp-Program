#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    string fN1,lN1;
    cin >> fN1 >> lN1;
    string fN2, lN2;
    cin >> fN2 >> lN2;

    if(lN1==lN2)
        cout << "ARE Brothers" << nl;
    else
        cout << "NOT" << nl;


    return 0;
}