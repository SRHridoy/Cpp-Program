#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int binaryNum;
    cin >> binaryNum;

    int decimalNum = 0;
    int i = 0;
    while (binaryNum > 0)
    {
        int lastDigit = binaryNum % 10;
        if (lastDigit == 1)
            decimalNum += pow(2, i);
        binaryNum /= 10;
        i++;
    }
    cout << decimalNum;

    return 0;
}