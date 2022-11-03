#include<bits/stdc++.h>
using namespace std;
long factorial(int n)
{
    long f = 1;
    for (int i=1; i<=n; ++i)
        f *= i;
    return f;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    string s;
    cin >> s;

    int store =  factorial(s.size());
    sort(s.begin(),s.end());
    int countUniqe[s.size()];
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i+1])
        {
            countUniqe[i]++;
        }
        
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        store= store/(factorial(countUniqe[i]));
    }
    
    



    return 0;
}