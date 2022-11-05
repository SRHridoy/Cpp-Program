#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int sum=0,sumA=0;
    int cnt=0;
    for(int i=1;sumA<=n;i++)
    {
        sum+=i;
        sumA+=sum;
        cnt++;
        //cout<<sum<<endl;
       // cout<<sumA<<endl;
    }
    cout<<cnt-1<<endl;

    return 0;
}