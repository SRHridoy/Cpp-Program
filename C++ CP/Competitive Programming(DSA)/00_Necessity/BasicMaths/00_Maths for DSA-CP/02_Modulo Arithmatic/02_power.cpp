#include<bits/stdc++.h>
using namespace std;
//Binaray exponentiation
//binpow
//O(log b) time...
//fermet's little theorem...b^-1 = b^(m-2) % m//O(log m)
int pw(int a, int b, int m){
    if(b == 0){
        return a%m;
    }
    if(b%2==0){
        int t = pw(a,b/2,m);
        return(1ll * t * t % m);
    }
    else{
        int t = pw(a,(b-1)/2,m);
        t = (1ll * t * t) % m;
        return(1ll * a * t % m);
    }
}

int inverse(int x, int m){
    return pw(x,m-2,m);
}

int main()
{
    int a, b, m;
    cin >> a >> b >> m;//only if m is prime...

    cout << pw(a,b,m);

    int inv_b = inverse(b,m);//fermat's theorem
    int res = a * inv_b % m;
    cout << res << endl;


    return 0;
}