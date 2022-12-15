#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1,s2,s3,sCon;
    cin>>s1>>s2>>s3;
    sCon=s1+s2;
    sort(sCon.begin(),sCon.end());
    sort(s3.begin(),s3.end());

    if(sCon==s3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}