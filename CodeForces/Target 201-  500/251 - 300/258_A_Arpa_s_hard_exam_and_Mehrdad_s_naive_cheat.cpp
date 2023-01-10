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
/* ----------NUMBER THEORY---------- */
/* here, 1378^n mod 10 = 8^n ...
if n = 0 then 1 otherwise,
n mod 4 = 0 then 6
n mod d = 1 then 8
n mod d = 2 then 4
n mod d = 3 then 2
*/

    int n; cin >> n;
    if(n == 0){
        cout << 1 <<endl;
    }else if(n%4==0){
        cout << 6 << endl;
    }else if(n%4 == 1){
        cout << 8 << endl;
    }else if (n%4 == 2){
        cout << 4 << endl;
    }else{
        cout << 2 << endl;
    }
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