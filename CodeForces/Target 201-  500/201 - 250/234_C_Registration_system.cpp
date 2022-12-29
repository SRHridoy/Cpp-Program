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
/* ----------Time limit exceeded on test 7---------- */
    // int n; cin >> n;
    // vector<string>s(n);
    // fo(i,n){
    //     cin >> s[i];
    //     if(i==0){
    //         cout << "OK" << endl;
    //     }
    //     if(i>0){
    //         int cnt = count(all(s),s[i]);
    //         if(cnt==1){
    //             cout << "OK" << endl;
    //         }else{
    //             cout <<s[i]<<cnt-1<< endl;
    //         }
    //     }
    // } 
    
    int n; cin >> n;
    string s;
    unordered_map<string,int>msi;
    fo(i,n){
        cin >> s;
        if(msi[s]){
            cout << s << msi[s] << endl;
            msi[s]++;
        }else{
            cout << "OK" << endl;
            msi[s] = 1;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    // cin >> t;
    while (t--){
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}