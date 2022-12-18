/*
Given 2D array a of N*N integers. Given Q queries and in each query given a, b, c and d print sum of square represented by (a, b) as top lest point and (c, d) as bottom right point.

Constraints:
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a, b, c, d <= N
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int arr[N][N];
long long prefixSum[N][N];
int main()
{//--------------------------------------> O(N)
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> arr[i][j];
            prefixSum[i][j] = arr[i][j] + prefixSum[i-1][j] + prefixSum[i][j-1] - prefixSum[i-1][j-1];
        }   
    }
    int q; cin >> q;
    while (q--)
    {
        int a, b , c, d;
        cin >> a >> b >> c >> d;
        cout << prefixSum[c][d] - prefixSum[a-1][d] - prefixSum[c][b-1] + prefixSum[a-1][b-1] << endl;
    }
    

    return 0;
}