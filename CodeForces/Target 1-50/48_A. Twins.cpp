#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int a[n];
    int sum = 0, sum2 = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    sum/=2;

    sort(a,a+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }
    for (int i = n-1; i >= 0; i--)
    {
        sum2+=a[i];
        count++;
        if (sum<sum2)
        {
            break;
        }
        
    }
    cout << count;
    
    

    return 0;
}