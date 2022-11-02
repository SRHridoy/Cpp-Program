#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int N;
    cin >> N;
    
    vector<int>v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }  
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    
    


    return 0;
}