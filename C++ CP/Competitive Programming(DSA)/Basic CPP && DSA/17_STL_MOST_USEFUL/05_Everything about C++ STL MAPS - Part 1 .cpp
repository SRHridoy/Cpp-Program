#include<bits/stdc++.h>
#define int   long long
using namespace std;

void printMap(map<int,string> &m){
    cout << "SIZE: " << m.size() << endl;
    for(auto &it : m){
        cout << it.first << " " << it.second << endl;
    }//N*log(N)
}

signed main(){
    map<int, string > m;
/* ----------TAKING INPUT---------- */
    m[1] = "abc";//O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[5] = "cde";
    // m.insert({4, "afg"});
    // m.insert(make_pair(6, "hri"));
/* ----------SHOWING OUTPUT---------- */
    /* map<int,string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
        //cout << (*it).first << " " << (*it).second << endl;
    } */
    /* ----------SHORTCUT---------- */
    /* for(auto &it : m){
        cout << it.first << " " << it.second << endl;
    } */
    /* map<int,int>m;
    m[8];//O(log(n))
    m[9] = 5 */;
    auto it = m.find(7);
    //m.erase(3);//log(n)
    if(it != m.end()){
        m.erase(it);
    }
    /* if(it == m.end()){
        cout << "NO value";
    }else{
        cout << it->first << " " << it->second << endl;
    } */
    printMap(m);
    m.clear();
    printMap(m);

    /* m["abcd"] = "abcd"; //key.size() * log(n) */
}