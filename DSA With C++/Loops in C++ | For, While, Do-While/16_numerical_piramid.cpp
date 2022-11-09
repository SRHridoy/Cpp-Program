#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= (n-i);j++)
            cout << " ";
        for(int j = 1; j <= i;j++)
            cout << j;
        for(int j = (i - 1); j>=1;j--)
            cout << j;
        cout << nl;
    }


    return 0;
}