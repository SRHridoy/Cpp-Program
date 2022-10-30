#include<bits/stdc++.h>
using namespace std;
//

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    s.erase(unique(s.begin(), s.end()), s.end());
    cout<<s;
    for (int i = 0; i < s.size(); i++)
    {
        if(count(s.begin(),s.end(),s[i])!=1)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}