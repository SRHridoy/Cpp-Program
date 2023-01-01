//       *Author: Md Sohanur Rahman Hridoy* ​

// In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include "bits/stdc++.h"
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define endl '\n'
#define all(v) v.begin(), v.end()
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i++ : i--)
using namespace std;

void solve()
{
    /* ----------MAX SUM SUBARRAY OF SIZE K---------- */

    /* ----------BRUTE FORCE APPROACH---------- */
    // int n, k; cin >> n >> k;
    // vector<int>v(n);
    // fo(i,n) cin >> v[i];
    // int maxSum = INT_MIN;
    // fo(i,n){
    //     int sum = 0;
    //     Fo(j,i,i+k){
    //         sum += v[j];
    //         maxSum = max(maxSum,sum);
    //     }
    // }cout << maxSum << endl;

    /* ----------OPTIMAL SLIDING WINDOW APPROACH---------- */
    int n, k; cin >> n >> k;
    vector<int>v(n);
    fo(i,n) cin >> v[i];
    int i = 0, j = 0;
    int sum = 0;
    int maxSum = INT_MIN;
    while (j<n){
        sum+=v[j];
        if(j-i+1 < k){
            j++;
        }else if(j-i+1 == k){
            maxSum = max(maxSum,sum);
            sum -= v[i];
            i++; j++;
        }
    }cout << maxSum << endl;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    // int cs = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case-#" << cs <<": ";
        solve();
        // cs++;
    }
}