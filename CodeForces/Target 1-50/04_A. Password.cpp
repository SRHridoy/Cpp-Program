#include<bits/stdc++.h>
using namespace std;
long factorial(int n)
{
    long f = 1;
    for (int i=1; i<=n; ++i)
        f *= i;
    return f;
}
int main(){
    int t, n, a,last,ans;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
        }
        
        last = 10 - n;
        ans =(factorial(last)/(2*factorial(last - 2)))* factorial(4)/(2*2);
        cout << ans << endl;
    }
    
    return 0;
}