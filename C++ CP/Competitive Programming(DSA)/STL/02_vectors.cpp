#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout << "SIZE-->" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int in;
    //     cin >> in;
    //     printVec(v);
    //     v.push_back(in);
    // }

    // vector<int>v(10,3);
    // printVec(v);

    vector<int> v;
    v.push_back(7); 
    v.push_back(6);
    // printVec(v);
    // v.pop_back();
    // printVec(v);

    //Copy of vector-->
    vector<int> &v2 = v;//O(n)
    v2.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v2);


    return 0;
}