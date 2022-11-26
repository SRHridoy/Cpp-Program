#include<bits/stdc++.h>
using namespace std;

int power(int a, int b)//time & space-->O(logN)
{
    if(b == 0)
        return 1;
    int x = power(a,b/2);
    if(b%2==0)
        return x*x;
    else
        return x*x*a;
}

int main()
{
    int a,b; cin >> a >> b;
    int pow_of_a_b = power(a,b);
    cout << pow_of_a_b << endl;

    return 0;
}