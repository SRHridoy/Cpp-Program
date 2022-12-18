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
    int m11,m12,m21,m22;
    cin >> m11 >> m12 >> m21 >> m22;
    int n11, n12,n21,n22;
    if((m11<m21) && (m11 < m12) && (m12 <m22) && (m21 < m22)){
        cout << "YES" << endl;
    }else{
        n11 = m21;n12 = m11;n21 = m22;n22 = m12;
        cout << n11 << " " << n12 << endl << n21 << " " << n22 << endl;
        ((n11<n21) && (n11 < n12) && (n12 <n22) && (n21 < n22)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

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