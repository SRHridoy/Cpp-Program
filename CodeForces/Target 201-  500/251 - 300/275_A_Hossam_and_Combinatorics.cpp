//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include"bits/stdc++.h"
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
#define all(v)            v.begin(),v.end()
#define fo(i, n)          for(int i = 0; i < n; i++)
#define Fo(i,k,n)         for(int i = k;k<n?i<n:i>n;k<n?i++:i--)
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    int minv = *min_element(a.begin(), a.end());
    int maxv = *max_element(a.begin(), a.end());

    long long minc = 0, maxc = 0;
    for (int x : a) {
        minc += x == minv;
        maxc += x == maxv;
    }

    if (minc == n)
      cout << minc * (minc - 1) << '\n';
    else
      cout << minc * maxc * 2 << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    //t = 1;
    //int cs = 1;
    cin >> t;
    while (t--){
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}