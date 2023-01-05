#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin >> n;

    int sum = 0;
    
    int i = 1;
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    cout << sum << "\n";

    return 0;
}