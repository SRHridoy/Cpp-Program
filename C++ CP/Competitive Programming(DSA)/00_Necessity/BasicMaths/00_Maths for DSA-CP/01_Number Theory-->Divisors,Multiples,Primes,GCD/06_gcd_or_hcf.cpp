#include<bits/stdc++.h>
using namespace std;

//log max(a,b)...
// int gcd(int a, int b){
//     if(a == 0)
//         return b;
//     return gcd(b%a,a);
// }

int main()
{
//gcd-->
//    greatest common divisors...
//co-prime number--> 
//    gcd(a,b) = 1...
//if b>a-->
//    gcd(a,b) = gcd(a,b-a)...
//    gcd(a,b) = gcd(b%a,a)...O(log max(a,b))

//gcd(0,anynumber)-->anynumber...

    int a, b;
    cin >> a >> b;

    // cout << gcd(a,b) << endl;
    cout << __gcd(a,b) << endl;
    return 0;
}