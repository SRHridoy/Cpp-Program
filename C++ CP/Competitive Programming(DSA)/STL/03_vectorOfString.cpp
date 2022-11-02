#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string>&v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    vector<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    
    printVec(v);

    return 0;
}