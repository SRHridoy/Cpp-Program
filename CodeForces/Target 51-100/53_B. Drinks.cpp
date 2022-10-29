#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int pi[n],sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> pi[i];
        sum+=pi[i];
    }
    
    double sumP = ((sum*100)/(n*100*1.0));
    printf("%1.12f",sumP);

    return 0;
}