#include<bits/stdc++.h>
using namespace std;

// long long tien1210(long long n, long long a){
//     if (n % a == 0){
//         return n / a;
//     } else {
//         return (n / a) + 1;
//     }

int main(){
    long long int n, m, a;
    cin >> n >> m >> a;

    // auto ans = ceil(float(m*1.0/a)) * ceil(float(n*1.0/a));
    cout<<((n-1)/a+1)*((m-1)/a+1);;
    return 0;
}