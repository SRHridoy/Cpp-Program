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
    int n; cin >> n;
    vector<int>v(n);
    fo(i,n) cin >> v[i];
    int maxi = INT_MIN, mini = INT_MAX;
    fo(i,n){
        if(i==0){
            maxi = abs(v[n-1]-v[0]);
            mini = abs(v[1]-v[0]);
        }else if(i==n-1){
            maxi = abs(v[n-1]-v[0]);
            mini = abs(v[n-1]-v[n-2]);
        }else{
            maxi = max(abs(v[i]-v[n-1]), abs(v[i]-v[0]));
            mini = min(abs(v[i]-v[i-1]), abs(v[i]-v[i+1]));
        }
        cout << mini << " " << maxi << endl;
    }
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--){
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}