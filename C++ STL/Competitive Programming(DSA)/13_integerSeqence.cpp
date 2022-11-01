#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define ld long double;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    
    if (n % 4 == 0 || n % 4== 3)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    return 0;
}