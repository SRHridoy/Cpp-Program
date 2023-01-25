#include<bits/stdc++.h>
#define int   long long
using namespace std;

int32_t main(){
    int t; 
    cin >> t;

    while(t--){
        int l, r; 
        cin >> l >> r;

        if(2*l > r)
        cout << -1  << " " << -1 << endl;
        else
        cout << l << " " << l*2 << endl;
    }
}