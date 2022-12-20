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
    int n, k; cin >> n >> k;
    vector<int>a;
    fo(i,n){
        int x; cin >> x;
        a.pb(x);
    }sort(all(a));
    vector<int>b;
    fo(i,n){
        int x; cin >> x;
        b.pb(x);
    }sort(all(b),greater<>());

    fo(i,k){
        if(a[i]<b[i]){
            swap(a[i],b[i]);
        }else{
            break;
        }
    }
    cout << accumulate(all(a),0) << endl;
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