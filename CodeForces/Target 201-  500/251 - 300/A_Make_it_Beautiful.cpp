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
    vector<int> v; 
    set<int>s;
    fo(i,n) {
        int x; cin >> x;
        v.pb(x);
        s.insert(x);
    }
    sort(all(v),greater<int>());
    //fo(i,n)  cout << v[i];
    vector<int>ans;
    //cout << uni << endl;
    int uni = s.size();
    if(n%2==0 && uni == 1){
        cout << "NO" << endl; 
    }else{
        cout << "YES" << endl;
        //int l = 0,r = n-1;
        for(int i = 0; i < n and ans.size()<n ; i++){
            if(i==0){
                ans.pb(v[n-1]);
                //continue;
            }
            else if(i==(n-1)){
                ans.pb(v[0]);
               // continue;
            }else{
                ans.pb(v[i]);
            } 
        }
        fo(i,n) cout << ans[i] << " ";
        cout << endl;
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