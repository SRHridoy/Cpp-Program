#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string subS;
        cin>>subS;
        string s = subS.substr(0, 2);
        for (int i = 3; i < subS.size(); i += 2) {
            s += subS[i];
        }
        cout << s << endl;
    }

    return 0;
}