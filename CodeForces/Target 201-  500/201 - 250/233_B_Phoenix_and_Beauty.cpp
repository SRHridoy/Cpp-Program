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
    set<int>s;
    fo(i,n){
        int x; cin >> x;
        s.insert(x);
    }
/* ----------IF DISTINCT NUMBERS ARE MORE THAN K ,PRINTS -1 */
    if(s.size()>k){
        cout << -1 << endl;
        return;
    }
    cout << n*k << endl;

    fo(i,n){
        /* ----PRINT THE DISTINCT NUMBERS----- */
        for(auto it:s){
            cout << it << " ";
        }
        /* -----PRINT THE EXTRA 1S */
        for(int j = 0; j<k-(int)s.size(); j++){
            cout << 1 << " ";
        }cout << endl;
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