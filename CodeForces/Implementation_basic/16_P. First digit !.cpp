#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int x;
    cin >> x;

    // int firstD;
    // while (x>=10)
    // {
    //     x/=10;
    // }
    // firstD = x;

    int digits = log10(x);
    x = x/pow(10,digits);
    int firstD = x;
    if(firstD%2==0)
        cout << "EVEN" << nl;
    else
        cout << "ODD" << nl;


    return 0;
}
// // Find the first digit
// int firstDigit(int n)
// {
//     // Find total number of digits - 1
//     int digits = (int)log10(n);
 
//     // Find first digit
//     n = (int)(n / pow(10, digits));
 
//     // Return first digit
//     return n;
// }
 
// // Find the last digit
// int lastDigit(int n)
// {
//     // return the last digit
//     return (n % 10);
// }