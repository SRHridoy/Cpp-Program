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
#define fo(i, n)          for(int i = 0; i < n; i++)
#define Fo(i,k,n)         for(int i = k;k<n?i<n:i>n;k<n?i++:i--)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>v;
    int sum = 0;
    fo(i,n){
        int x; cin >> x;
        v.pb(x);sum+=x;
    }
    if(sum%2==0){
        cout << 0 << endl;
    }else{
        int ans = 1e6 + 10;
        fo(i,n){
            int j = v[i];
            int nOp = 0;
            while((j%2)==(v[i]%2)){
                nOp++; j/=2;
            }ans = min(ans,nOp);
        }cout << ans << endl;
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