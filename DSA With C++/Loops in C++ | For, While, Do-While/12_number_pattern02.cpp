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

    for(int i = 1; i <= n-2; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << nl;
    }


    return 0;
}