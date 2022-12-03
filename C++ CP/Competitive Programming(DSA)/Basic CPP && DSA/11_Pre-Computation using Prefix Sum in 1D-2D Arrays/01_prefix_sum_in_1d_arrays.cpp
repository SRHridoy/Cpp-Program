/*
Given array a of N integers. Given Q queries and in each query given L and R print sum of array elements from index L to R (L , R included)

Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];
int prefixSum[N];
int main()
{                                       //------> O(N)
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        prefixSum[i] = prefixSum[i-1] + a[i];
    }
    int q;
    cin >> q;
    while (q--){
        int l, r;
        cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l-1] << endl;//----------->O(1)
    }
    
    
    return 0;
}