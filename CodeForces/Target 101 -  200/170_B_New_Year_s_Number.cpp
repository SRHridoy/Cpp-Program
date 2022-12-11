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
    // string n; cin >> n;--->1900th testcase caught
    //     if(stoi(n)<4040){
    //         cout << "NO" << endl;
    //     }else if((int)(n[0]-'0')==(int)(n[2]-'0') && ((int)(n[0]-'0')%2==0) || n[0] == 1){
    //         cout << "YES" << endl;
    //     }else{
    //         cout << "NO" << endl;
    //     }
    int n; cin >> n;
    int hri = n%2020;
    int doy = (n-hri)/2020-hri;
    if(doy>=0 &&(n==2020*doy+2021*hri)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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