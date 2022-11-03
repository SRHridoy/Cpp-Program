#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n,m;
    cin >> n>> m;
    
    vector<bool>isPrime(n,1);

    for (int  i = 2; i < n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 0; j < n; j++)
            {
                isPrime[j] = false;
            }
            
        }
        
    }
    if (m>)
    {
        /* code */
    }
    


    return 0;
}