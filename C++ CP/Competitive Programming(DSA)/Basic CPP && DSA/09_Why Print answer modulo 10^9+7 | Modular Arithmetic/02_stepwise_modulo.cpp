#include<bits/stdc++.h>
using namespace std;
int main()
{
/*
    Given a number N. Print its factorial
    Constrains-->
    1 <= N <= 100

    Print answer module M
    where M = 47 --> ans always M er chotot hobe

*/    

    int n;
    cin >> n;
    int M = 47;
    int fact = 1;
    for(int i = 2; i <= n; i++){
        fact = (fact * i) % M;
    }
    cout << fact << endl;
    return 0;
}