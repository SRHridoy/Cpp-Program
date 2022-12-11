#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
// function check whether a number
// is prime or not
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
void solve()
{
    ll n;
    cin >> n;
    ll primes[n];
    for (int i = 0; i < n; i++)
    {
        cin >> primes[i];
    }
    for (int i = 0; i < n; i++)
    {
        
        bool TP = isPrime(sqrt(primes[i]));
        // cout <<primes[i] << endl <<sqrt(primes[i]) << endl <<  TP << endl;
        if (primes[i] == 1||primes[i]==0)
        {
            cout << "NO" << endl;
        }  
        else if (floor(sqrt(primes[i])) * floor(sqrt(primes[i])) == primes[i] && TP == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
    // int cs = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case-#" << cs <<": ";
        solve();
        // cs++;
    }
}