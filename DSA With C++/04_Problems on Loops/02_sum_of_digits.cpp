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
    while (n>0)
    {
        int lastDigit = n%10;
        sum+=lastDigit;
        n/=10;
    }
    cout << sum;


    return 0;
}