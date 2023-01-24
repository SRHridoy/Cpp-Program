#include<bits/stdc++.h>
#define int   long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while (t--) {
        int x0, n;
        cin >> x0 >> n;
        for (int i = 1; i <= n % 4; ++i) {
            int d = n - (n % 4 - i);
            if (x0 % 2 == 0) x0 -= d;
            else x0 += d;
        }
        cout << x0 << '\n';
    }
}