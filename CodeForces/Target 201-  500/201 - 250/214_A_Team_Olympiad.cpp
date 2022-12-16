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
    vector<int>v,a,b,c;
    int cnt1 = 0,cnt2 = 0,cnt3 = 0;
    Fo(i,1,n+1){
        int x; cin >> x;
        v.pb(x);
        if(x==1){cnt2++;a.pb(i);}
        if(x==2){cnt1++;b.pb(i);}
        if(x==3){cnt3++;c.pb(i);}
    }
    int mini = min(cnt1,min(cnt2,cnt3));
    cout << mini << endl;
    fo(i,mini){
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
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