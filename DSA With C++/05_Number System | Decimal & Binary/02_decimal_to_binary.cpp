#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int decimalNum;
    cin >> decimalNum;

    int binaryNum = 0;
    int power = 1;

    while (decimalNum>0)
    {
        int parityDigit = decimalNum % 2;
        binaryNum += parityDigit*power;
        power*=10;
        decimalNum/=2;
    }
    
    cout << binaryNum;

    return 0;
}