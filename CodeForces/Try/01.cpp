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
     string str;
	cin>>str;
    int idx;
    string s="";
    for(int i=0; i<20; i++)
        s+="Yes";
	if((idx = s.find(str, 0)) == string::npos)
	    cout<<"NO"<<endl;
	else 
	    cout<<"YES"<<endl;

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