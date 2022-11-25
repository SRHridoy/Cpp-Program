#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int cnt = 0;
    for (int i = 1; i*i<= n; i++)//O(sqrt(n)) but if we use i<=sqrt(n) it will be O(sqrt(n) x logN)...
    {
        if (n%i==0)
        {
            cnt++;
            if((n/i)!=i)
                cnt++;
        }
    }
    if(cnt == 2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}