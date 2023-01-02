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

vector<int>v(1e7+10);

void solve(){
    int n, m; cin >> n >> m;
/* ----------BRUTE-FORCE APPROACH---------- */
    // while (m--)
    // {
    //     int a, b, d;
    //     cin >> a >> b >> d;
    //     Fo(i,a,b+1){
    //         v[i]+=d;
    //     }
    // }
    // int maxi = *max_element(all(v));
    // cout << maxi << endl;

/* ----------OPTIMAL-APPROACH---------- */
    while (m--)
    {
        int a, b, d;
        cin >> a >> b >> d;
        v[a]+=d;
        v[b+1]-=d;
    }
    Fo(i,1,n+1){
        v[i]+=v[i-1];
    }
    int maxi = *max_element(all(v));
    cout << maxi << endl;
    

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