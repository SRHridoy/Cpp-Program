#include<bits/stdc++.h>
#define int   long long
using namespace std;

void printSet(set<string>&s){
    for(auto it : s){
        cout << it << endl;
    }
}

signed main(){
    set<string>s_s;
    s_s.insert("abc");//log(n)
    s_s.insert("zsdf");
    s_s.insert("bcd");
    s_s.insert("bcd");
    auto it = s_s.find("abc");
    if(it != s_s.end()){
        cout << (*it) << endl;
        s_s.erase(it);
    }
    s_s.erase("abc");
    printSet(s_s);

   // unordered_set is simillar as unordered_map
}