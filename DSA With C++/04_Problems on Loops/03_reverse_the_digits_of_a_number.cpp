#include <bits/stdc++.h>
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

    int reverseNum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverseNum = reverseNum * 10 + lastDigit;
        n /= 10;
    }

    cout << reverseNum;

    return 0;
}