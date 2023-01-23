#include<bits/stdc++.h>
using namespace std;

// bool should_i_swap(int a, int b){
//     if(a > b) return true;
// }

/* pair comparator */
bool should_i_swap_pair(pair<int,int>a, pair<int,int>b){
    if(a.first!=b.first){
        if(a.first > b.first) return true;
        return false;
    }else{
        if(a.second < b.second) return true;
        return false;
    }
    if(a < b) return true;
}

signed main(){
    int n; cin >> n;
    //vector<int>v(n);
    vector<pair<int,int>>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
/* {SRH}----------SORTING ALGO----------{SRH} */
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         /* if(v[i] < v[j]) */
    //         if(should_i_swap_pair(v[i],v[j])){
    //             swap(v[i],v[j]);
    //         }
    //     }
        
    // }
   // sort(v.begin(),v.end(),greater<int>());
    sort(v.begin(),v.end(),should_i_swap_pair);
    
    for(auto it:v){
        cout << it.first << " " << it.second << endl;
    }
}