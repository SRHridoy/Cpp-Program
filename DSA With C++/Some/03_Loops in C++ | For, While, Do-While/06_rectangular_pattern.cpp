#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int row, col;
    cin >> row >> col;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << nl;
    }

    return 0;
}