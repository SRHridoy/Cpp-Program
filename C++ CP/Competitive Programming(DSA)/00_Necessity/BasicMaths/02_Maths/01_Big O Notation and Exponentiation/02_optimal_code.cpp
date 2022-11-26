#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int sumV1 = 0;
    vector<int>v1;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v1.emplace_back(x);
        sumV1+=x;
    }
    int sumV2 = 0;
    vector<int>v2;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v2.emplace_back(x);
        sumV2+=x;
    }
    
    cout << sumV1*sumV2 << endl;
/*  v1 = {a,b,c}
    v2 = {c,d,f}
    ans = (a*c)+(a*d)+(a*f)+(b*c)+(b*d)+(b*f)+(c*c)+(c*d)+(c*f)
        = ac + ad + af + bc + bd + bf + cc + cd + cf
        = a(c+d+f) + b(c+d+f) + c(c+d+f)
        = (a+b+c) (c+d+f)-->DONE...
*/
    return 0;
}