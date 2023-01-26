#include<bits/stdc++.h>
#define int   long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        int sum = accumulate(v.begin(),v.end(),0);
        if((sum)>=n){
            cout << (sum)-n << endl;

        }else{
            cout <<1<< endl;

        }
    }
}