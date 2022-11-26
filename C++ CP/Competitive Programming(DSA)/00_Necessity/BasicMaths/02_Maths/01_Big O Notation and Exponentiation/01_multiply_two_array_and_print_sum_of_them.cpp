#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int>v1;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v1.push_back(x);
    }
    
    vector<int>v2;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v2.push_back(x);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)//O(N^2)
    {
        for (int j = 0; j < n; j++)
        {
            sum+=v1[i]*v2[j];
        }
        
    }
    cout << sum <<endl;
    

    return 0;
}