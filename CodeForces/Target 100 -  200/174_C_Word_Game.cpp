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
    cin.ignore();
    set<string>row[3];
    string str;
    fo(i,3){
        fo(j,n){
            cin >> str;
            row[i].insert(str);
        }
    }

    fo(i,3){
        int score = 0;
        for(set<string>::iterator it = row[i].begin();it!=row[i].end();it++){
            if(row[(i+1)%3].count(*it) and row[(i+2)%3].count(*it))
                continue;
            if(row[(i+1)%3].count(*it) or row[(i+2)%3].count(*it))
                score++;
            else
                score+=3;
        }
        cout << score << " ";
    }
    cout << endl;
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