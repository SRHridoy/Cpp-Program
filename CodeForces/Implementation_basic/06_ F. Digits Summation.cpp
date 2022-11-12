#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll n,m;
    cin >> n >> m;
    
    int lastDigitOfN = n%10;
    int lastDigitOfM = m%10;
    cout << lastDigitOfM+lastDigitOfN << endl;


    return 0;
}