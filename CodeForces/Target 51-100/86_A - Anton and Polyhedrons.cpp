#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int sum=0;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        if(s[0]=='T')
            cnt+=4;
        else if(s[0]=='C')
            cnt+=6;
        else if(s[0]=='O')
            cnt+=8;
        else if(s[0]=='D')
            cnt+=12;
        else if(s[0]=='I')
            cnt+=20;
        sum+=cnt;
    }
        
        cout<<sum<<endl;

        return 0;
    }