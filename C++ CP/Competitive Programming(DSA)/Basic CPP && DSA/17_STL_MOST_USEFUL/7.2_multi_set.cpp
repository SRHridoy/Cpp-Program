#include<bits/stdc++.h>
#define int   long long
using namespace std;

signed main(){
    multiset<string> s;
    s.insert("asdf");//O(log(N))
    s.insert("asdf");
    s.insert("jklm");
    s.insert("asdfg");
    s.insert("jklm");
/* ----------ERASE FIXED ITERATOR---------- */
    // auto it = s.find("asdf"); //O(log(n))
    // if(it != s.end()){
    //     s.erase(it);
    // }
    s.erase("asdf");//ERASE ALL VALUE

    for(auto it : s){
        cout << it << endl;
    }
}