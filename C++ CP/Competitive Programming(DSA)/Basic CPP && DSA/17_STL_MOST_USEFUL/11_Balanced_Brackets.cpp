#include<bits/stdc++.h>
#define int   long long
using namespace std;

unordered_map<char,int>symbols = {{'[',-1},{']',1},{'{',-2},{'}',2},{'(',-3},{')',3}};
string isBalanced(string s) {
    stack<char>stk;
    for(auto bracket:s){
        if(symbols[bracket]<0){
            stk.push(bracket);
        }else{
            if(stk.empty()) return "NO";
            char top = stk.top();
            stk.pop();
            if(symbols[top]+symbols[bracket]!=0) return "NO";
        }
    }
    if(stk.empty()) return "YES";
    else return "NO";
}
signed main(){
    int t ; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << isBalanced(s) << endl;
    }
}