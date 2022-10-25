#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, i, c = 0;
    cin >> n >> x;

    for (i = 1; i <= n; i++)
    {
        if (x % i == 0 && x / i <= n)
        {

            c++;
        }
    }

    cout << c << endl;
}
