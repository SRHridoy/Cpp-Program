#include<bits/stdc++.h>
#define int   long long
using namespace std;

signed main(){
    unordered_map<int, string> m;
    //ALL O(1)...
    m[1] = "abc"; //O(1)
    m[5] = "cdc";
    auto it = m.find(1);//O(1)
    if(it != m.end()){
        m.erase(it);//O(1)
    }
    
}