/* 
Given N strings and Q queries.
In each query you are given a string print yes if string is present 
else print no.
 */

#include<bits/stdc++.h>
#define int   long long
using namespace std;

signed main(){
    unordered_set<string>u;
    int N; cin >> N;
    for(int i = 0; i< N; i++){
        string s; cin >> s;
        u.insert(s);
    }
    int Q; cin >> Q;
    while (Q--){
        string s; cin >> s;
        if(u.find(s)==u.end()){
            cout << "no" << endl;
        }else{
            cout << "yes" << endl;
        }
    }
    {
        /* code */
    }
    
}