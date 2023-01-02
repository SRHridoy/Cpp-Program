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
//int hsh[26];

const int N = 1e5+10;
int hsh[N][26];

void solve(){
/* ----------BRUTE-FORCE APPROACH---------- */
    // int n, q; cin >> n >> q;
    // string s; cin >> s;
    // while (q--)
    // {
    //     int l,r; cin >> l >> r;
    //     l--;r--;
    //     Fo(i,l,r+1){
    //         hsh[s[i]-'a']++;
    //     }
    //     int oddCnt = 0;
    //     fo(i,26){
    //         if(hsh[i]%2!=0) oddCnt++;
    //     }
    //     if(oddCnt>1)cout <<"NO" << endl;
    //     else cout << "YES" << endl;
    // }
    
/* ----------OPTIMAL-APPROACH---------- */
    int n,q; cin >> n >> q;
    string s; cin >> s;
    fo(i,n){
        hsh[i+1][s[i]-'a']++;
    }
    fo(i,26){
        Fo(j,1,n+1){
            hsh[j][i] += hsh[j-1][i];
        }
    }
    while (q--){
        fo(i,N){
            fo(j,26){
                hsh[i][j] = 0;
            }
        }
        int l, r; cin >> l >> r;
        int oddCnt = 0;
        fo(i,26){
            int charCnt = hsh[r][i]-hsh[l-1][i];
            if(charCnt % 2 != 0) oddCnt++;
        }
        if(oddCnt > 1) cout << "NO" << endl;
        else cout << "YES" << endl;
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