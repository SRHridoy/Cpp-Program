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
    int k; cin >> k;
    vector<pair<int,int>>vp;
    int ar[k];
    vector<int>v;
    fo(i,k){
        cin >> ar[i];
        v.pb(ar[i]);
    }sort(ar,ar+k);
    Fo(i,k-1,0){
        int ind;
        fo(j,v.size()){
            if(ar[i]==v[j]){
                ind = j; break;
            }
        }if(i==ind){
            v.ppb();continue;
        }else{
            vp.pb({ind+1,i+1});
            vector<int>vv;
            fo(j,v.size()){
                if(j==ind)continue;
                vv.pb(v[j]);
            }v = vv;
        }
    }cout << vp.size() << endl;
    fo(i,vp.size()){
        cout << vp[i].first << " " << vp[i].second <<" " << 1 << endl;
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