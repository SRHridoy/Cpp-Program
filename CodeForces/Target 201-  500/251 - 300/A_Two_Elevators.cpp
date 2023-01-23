#include<bits/stdc++.h>
#define int   long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int a, b , c; 
        cin >> a >> b >> c;

        int fLiftTime = a - 1;
        int secondLiftTime = abs(b-c)+abs(c-1);
        if(fLiftTime<secondLiftTime){
            cout << 1 << endl;
        }else if (fLiftTime>secondLiftTime){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }
}