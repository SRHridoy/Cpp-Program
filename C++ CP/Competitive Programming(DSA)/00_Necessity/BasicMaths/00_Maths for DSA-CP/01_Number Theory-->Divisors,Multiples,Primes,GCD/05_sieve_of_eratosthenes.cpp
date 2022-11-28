#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    vector<int>sieve(n+1,1);
    sieve[1] = 0;

    //O(n log(log(n)))-->very fast -->almost linear...
    for (int i = 2; i <= n; i++)
    {
        if(!sieve[i]) continue;
        for (int j = i*i; j <=n ; j+=i)
            sieve[j] = 0;
    }
    

    return 0;
}