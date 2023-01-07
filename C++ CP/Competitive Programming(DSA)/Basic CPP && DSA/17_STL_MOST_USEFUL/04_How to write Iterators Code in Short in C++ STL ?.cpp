#include<bits/stdc++.h>
#define int   long long
using namespace std;

signed main(){
    /* vector<int> v= {2, 3, 5, 6, 7};
    for(auto &value:v){
        value++;
        //cout << value << " ";
    }//cout << endl;
    for(auto value:v){
        cout << value << " ";
    } */

    vector<pair<int,int> > v_p = {{1,2}, { 2,3}};
    for(auto it : v_p){
        cout << it.first << " " << it.second <<endl;
    }
}