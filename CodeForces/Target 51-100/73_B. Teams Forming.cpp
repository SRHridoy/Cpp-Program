#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define ld long double;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
    
    int ans = 0;
    for (int i = 0; i < n-1; i+=2)
    {
        if (arr[i] < arr[i + 1])
        {
            ans += (arr[i+1] - arr[i]);
        }
    }
    cout << ans << endl;

    return 0;
}