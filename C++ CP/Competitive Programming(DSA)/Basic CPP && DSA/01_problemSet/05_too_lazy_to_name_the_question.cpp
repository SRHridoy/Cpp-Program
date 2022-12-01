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
    int a,b,c; cin >> a >> b >> c;
    int cth_num;
    for (int i = 2; c>0; i++)
    {
        if(i%a==0 || i%b==0){
            c--;
            cth_num = i;
        }
    }
    //cout << cth_num << endl;
    int lcm;
    for (int i = 1; i <= a*b ; i++)
    {
        if(i%a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    
    int step;
    if(cth_num%a==0 && cth_num%b==0){
        step = lcm;
    }else if (cth_num%a==0){
        step = a;
    }else{
        step = b;
    }
    for (int i = cth_num; i >= 0; i-=step)
    {
        cout << i << " ";
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