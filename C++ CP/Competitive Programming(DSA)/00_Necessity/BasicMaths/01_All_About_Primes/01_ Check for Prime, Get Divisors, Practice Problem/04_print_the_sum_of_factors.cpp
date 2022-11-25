#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;

    int sumF = 0;
    for (int i = 1; i*i<=n; i++)
    {
        if (n%i==0)
        {
            sumF+=i;
            if((n/i)!=i)
            {
                sumF+=(n/i);
            }
        }
    }
    cout << sumF << endl;

    return 0;
}