#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>>&v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    // vector<pair<int,int> > v = {{1,2},{3,4},{5,6}};
    // printVec(v);
    vector<pair<int,int> > v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
        // v.push_back(make_pair(x,y));
    }
    printVec(v);
    



    return 0;
}