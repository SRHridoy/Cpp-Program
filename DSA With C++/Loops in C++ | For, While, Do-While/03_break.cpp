#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int i = 5;
    while (true)
    {
        if (i%7==0)
        {
            cout << i << nl;
            break;
        }
        i+=5;
    }

    return 0;
}