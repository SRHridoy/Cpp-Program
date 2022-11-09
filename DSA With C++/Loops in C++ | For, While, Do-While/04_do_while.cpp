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

    int sum = 0;
    do
    {
        int num;
        cin >> num;
        sum+=sum;
        n--;
    } while (n>0);
    
    cout << sum << nl;


    return 0;
}