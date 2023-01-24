#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int n, d; 
        cin >> n >> d;

        vector<int>v(n);
        for(int&x:v) cin >> x;

        sort(v.begin(),v.end());
        if(v.back() <= d || v[0]+v[1] <=d){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

}