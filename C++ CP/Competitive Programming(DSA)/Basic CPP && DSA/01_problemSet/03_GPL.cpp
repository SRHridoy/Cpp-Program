#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = 0;
    int power2 = 1;
    for(int i = s.size() - 1; i>=0;i--)
    {
        int binary_digit = s[i] - '0';
        result += (binary_digit*power2);
        power2 *= 2;
    }
    cout << result << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // t = 1;
    //int cs = 1;
    cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}