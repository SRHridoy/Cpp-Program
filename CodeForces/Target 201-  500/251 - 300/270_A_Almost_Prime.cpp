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

int factorize(int n){
    int cnt = 0;
    for(int i = 2; i*i <= n;i++){
        if(n%i==0){
            while(n%i==0) n/=i;
            cnt++;
        }
    }if(n>1)cnt++;
    return cnt;
}

void solve(){
    int n; cin >> n;
    int cnt = 0;
    Fo(i,1,n+1){
        if(factorize(i)==2)cnt++;
    }cout << cnt << endl;

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