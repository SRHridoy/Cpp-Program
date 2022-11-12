#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    char x;
    cin >> x;

    if(x>='a' && x <='z')
        cout << "ALPHA" << nl << "IS SMALL" << nl;
    else if(x>='A' && x <='Z')
        cout << "ALPHA" << nl << "IS CAPITAL" << nl;
    else
        cout <<"IS DIGIT" << nl;


    return 0;
}