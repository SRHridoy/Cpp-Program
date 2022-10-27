#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int mg[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mg[i];
    }
    int count = 0;
    // for (int  j = 0; j < n-1; j++)
    // {
    //     for (int k = 1; k <= n; k++)
    //     {
    //         if (mg[j] == mg[k])
    //         {
    //             count = 1;
    //         }
    //         else
    //         {
    //             count++;
    //         }
            
    //     }
        
    // }
    for (int i = 0; i < n; i++)
    {
        if (mg[i] == mg[i+1])
        {
            continue;
        }
        else
        {
            count++;
        }
        
    }
    
    cout << count;

    return 0;
}