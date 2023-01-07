#include<bits/stdc++.h>
#define int   long long
using namespace std;

signed main(){
    // map<pair<int,int>, int>m;
    // pair<int,int>p1,p2;
    // p1 = {2,2};
    // p2 = {2,3};
    // cout << (p1 < p2);

    // map<set<int>,int>m;
    // set<int>s1 = {1,2,3};
    // set<int>s2 = {2,3};
    // cout <<(s1 < s2);
/* ----------Jegula amra erokom compare korte pari segulai key hisebe use korte pari---------- */
    map<pair<string,string>,vector<int>>m;
    int N; cin >> N;
    for(int i = 0; i < N; i++){
        string fn, ln;
        int n; cin >> fn >> ln >> n;
        for(int j = 0; j < n; j++){
            int x; cin >> x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &it : m){
        auto &full_name = it.first;
        auto &list = it.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
        for(auto &it:list){
            cout << it << " ";
        }cout << endl;
    }
}