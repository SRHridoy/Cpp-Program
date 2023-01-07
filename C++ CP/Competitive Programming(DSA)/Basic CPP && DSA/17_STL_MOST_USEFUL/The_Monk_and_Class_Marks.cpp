#include<bits/stdc++.h>
#define int   long long
using namespace std;

signed main(){
    map<int,multiset<string> >marks_mp;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int marks; string name;
        cin >> name >> marks;
        marks_mp[marks].insert(name);
    }
    auto last_it = --marks_mp.end();//current
    while (true)
    {
        auto &students = (*last_it).second;
        int marks = (*last_it).first;
        for(auto student: students){
            cout << student << " " << marks << endl;
        }
        if(last_it == marks_mp.begin())
            break;
        last_it--;
    }
    
}