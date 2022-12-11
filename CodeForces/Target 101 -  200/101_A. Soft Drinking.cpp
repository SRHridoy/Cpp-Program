#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, l, c, d, p, nlm, np, M;
    cin >> n >> k >> l >> c >> d >> p >> nlm >> np;

    c *= d;
    k *= l;
    k /= nlm;
    p /= np;
    M = min(c, k);
    M = min(M, p);
    cout << M / n << endl;
    return 0;
}