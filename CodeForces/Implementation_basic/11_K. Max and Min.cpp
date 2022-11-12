#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a,b,c;
    cin >> a >> b>> c;

    cout <<min(a,min(b,c))<<" " << max(a,max(b,c)) << nl;


    return 0;
}