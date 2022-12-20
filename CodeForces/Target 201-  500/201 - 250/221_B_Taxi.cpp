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
#define vec(n)            vector<int>v(n)
#define all(v)            v.begin(),v.end()
#define fo(i, n)          for(int i = 0; i < n; i++)
#define Fo(i,k,n)         for(int i = k;k<n?i<n:i>n;k<n?i++:i--)
using namespace std;

void solve(){
    int n, x, cnt=0, flag=0;
    cin >> n;
    map<int,int> mp;
    while(n--)
    {
        cin >> x;
        mp[x]++;
    }

    if(mp[3]>=mp[1])
        cnt+=max(mp[1],mp[3]);
    else
    {
        cnt+=min(mp[1],mp[3]);
        mp[1]-=mp[3];
        cnt+=((mp[1]+3)/4);
        flag=1;
    }
    cnt+=((mp[2]+1)/2);
    cnt+=mp[4];
    if((mp[1]%4==1||mp[1]%4==2)&&mp[2]%2&&flag) cnt--;
    cout << cnt;
    
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