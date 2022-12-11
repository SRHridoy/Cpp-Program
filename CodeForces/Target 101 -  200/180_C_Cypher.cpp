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
    int n; cin >> n;
    vector<int>v;
    fo(i,n){
        int x; cin >> x;
        v.pb(x);
    }
    int j = 0;
    fo(i,n){
        int b; cin >> b;
        string s; cin >>s;
    //     int cntD = count(s.begin(),s.end(),'D');
    //     int cntU = count(s.begin(),s.end(),'U');
    //     //cout <<endl <<  "D-->" << cntD << " U-->" << cntU << endl;
    //     //cout << "v[j]-->" << v[j] << endl;
    //     if(v[j]==0){
    //         cout << 0 - cntU + cntD<< " ";
    //         j++;
    //     }else if(v[j]==9){
    //         cout << 0 - cntU + cntD - 1<< " ";
    //         j++;
    //     }else{
    //         cout << v[j] - cntU + cntD << " ";
    //         j++;
    //     }
    // }cout << endl;
        for(auto it:s){
            if(it == 'D'){
                v[i]++;
                if(v[i]==10) v[i] = 0;
            }else{
                v[i]--;
                if(v[i]==-1) v[i] = 9;
            }
        }
    }
    for(auto it:v){
        cout << it << " ";
    }cout << endl;
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