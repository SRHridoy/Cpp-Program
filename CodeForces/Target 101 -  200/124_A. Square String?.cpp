//          ***Md Sohanur Rahman Hridoy*** ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

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
    string s;
	cin >> s;
	int n = s.length();
	if(n % 2 != 0)
		cout << "NO" << endl;
	else
    {
		string s1 = s.substr(0, n / 2);
		string s2 = s.substr(n / 2, n / 2);
		if(s1==s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
	}
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