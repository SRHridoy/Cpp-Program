/* Given N Strings, print unique strings in lexographical order with their frequency
N <= 10^5
|S| <= 100
 */
/* INPUT---->
            8
            abc
            def
            abc
            ghj
            jkl
            ghj
            ghj
            abc

    OUTPUT---->
            abc 3
            def 1
            ghj 3
            jkl 1
 */

#include<bits/stdc++.h>
#define int   long long
using namespace std;

signed main(){
    map<string,int>m_s_i;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        m_s_i[s]++;
    }
    for(auto it : m_s_i){
        cout << it.first << " " << it.second << endl;
    }
}