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
    int n; cin >> n;
    typedef pair<string,string> pairOfStrings;
/* ----------USING VECTOR OF PAIRS---------- */
    // vector<pairOfStrings>vps(n);
    // fo(i,n){
    //     cin >> vps[i].first >> vps[i].second;
    // }sort(all(vps));
    // /* for(auto it:vps){
    //     cout << it.first << " "  << it.second << endl;;
    // }cout << endl; */
    // int ans = unique(all(vps)) - vps.begin();
    // cout << ans << endl;

/* ---------USING SET OF PAIRS----------- */
    set<pairOfStrings>s;
    string s1, s2;
    fo(i,n){
        cin >> s1 >> s2;
        s.insert(make_pair(s1,s2));
    }cout << s.size() << endl;
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