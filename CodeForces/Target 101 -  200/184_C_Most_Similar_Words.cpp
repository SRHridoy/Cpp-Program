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

int compare(string a, string b){
    int ans = 0;
    int n = a.size();
    fo(i,n){
        ans+=abs(a[i]-b[i]);
    }return ans;
}

void solve(){
    int n, m; cin >> n >> m;
    string s[n]; 
    fo(i,n){
        cin >> s[i];
    }
    // fo(i,n){
    //     cout << s[i] << endl;
    // }
    int ans = INT_MAX;
    fo(i,n){
        Fo(j,i+1,n){
            ans = min(ans,compare(s[i],s[j]));
        }
    }cout << ans << endl;
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