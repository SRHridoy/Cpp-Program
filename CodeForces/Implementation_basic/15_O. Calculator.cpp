#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a,b;
    char s;
    cin >> a >> s >> b;

    if (s=='+')
        cout << a+b << nl;
    else if(s=='-')
        cout << a-b << nl;
    else if(s=='*')
        cout << a*b << nl;
    else
        cout << a/b << nl;
    
    


    return 0;
}