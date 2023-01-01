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

    int n, q; cin >> n >> q;
    vector<int>v(n+10);
    Fo(i,1,n+1) cin >> v[i];

    //precomputation-->
    vector<int>forword(n+10);
    vector<int>backword(n+10);
    forword[0] = backword[0] = 0;
    Fo(i,1,n+1){
        forword[i] = __gcd(forword[i-1],v[i]);
    }
    Fo(i,n,1){
        backword[i] = __gcd(backword[i+1],v[i]);
    }
    while(q--){
    /* ----------BRUTE-FORCE APPROACH---------- */
        int l,r; cin >> l >> r;
        //int gc = 0;
        // Fo(i,1,l) gc =__gcd(gc,v[i]);
        // Fo(i,r+1,n+1) gc = __gcd(gc,v[i]);
        // cout << gc <<endl;
    /* ----------OPTIMAL PRE-COMPUTED APPROACH---------- */
        cout << __gcd(forword[l-1],backword[r+1]) << endl;
    }
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