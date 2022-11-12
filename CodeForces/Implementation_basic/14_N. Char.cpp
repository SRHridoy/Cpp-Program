#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    char l;
    cin >> l;

    if (l>='a' && l<='z')
        cout << char(l-32) << nl;
    else
        cout << char(l+32) << nl;
    


    return 0;
}