#include<bits/stdc++.h>
#define int   long long
using namespace std;

int32_t main(){
    int n; cin >> n;


    string s1, s2;cin >> s1 >> s2;
    vector<int>v1,v2;
    for (int i = 0; i < n; i++)
    {
        int x = s1[i]-'0';
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x = s2[i]-'0';
        v2.push_back(x);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(abs(v1[i]-v2[i])<=5){
            sum+=abs(v1[i]-v2[i]);
        }else{
            sum+=(10-abs(v1[i]-v2[i]));
        }
    }
    cout << sum << endl;
    
    

}