#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n, k;
    cin >> n >> k;

    int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    for (long long int i = 1; i <= n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i%arr[j] == 0)
            {
                cnt++;
                break;
            }
                continue;
            
        }
        
    }

    cout << cnt << endl;

    return 0;
}