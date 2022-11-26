#include<bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    while (b>0)//time -->O(logN) && space O(1)...
    {
        if(b%2!=0)
            ans=ans * a;
        b = b >> 1;
        a = a * a;
    }
    return ans;
}

int main()
{
    int a, b; cin >> a >> b;
    int pow_of_a_b = power(a,b);
    cout << pow_of_a_b << endl;
    return 0;
}