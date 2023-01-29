#include<bits/stdc++.h>
#define int   long long
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}

int32_t main(){
    int a, b; cin >> a >> b;
    int mini = min(a,b);
    cout << factorial(mini) << endl;
}