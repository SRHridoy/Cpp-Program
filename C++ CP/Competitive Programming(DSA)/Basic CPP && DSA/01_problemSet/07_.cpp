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

char upper(char c){
    return 'A' + (c-'a');
}
char lower(char c){
    return 'a'+(c-'A');
}
void solve(){
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            s[i] = upper(s[i]);
        }else if(s[i]>='A' && s[i] <= 'Z'){
            s[i] = lower(s[i]);
        }
    }
    int result = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            result-=s[i];
        }else if(s[i]>='A' && s[i] <= 'Z'){
            result+=s[i];
        }
    }
    if(result<0){
        result*=-1;
    }
    int flag = 0;
    for (int i = 2; i < result; i++)
    {
        if(result%i==0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << 1;
    }else{
        cout << 0;
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