#include<bits/stdc++.h>
using namespace std;

int main()
{
   // pair<int,int>pr = {1,2};
    pair<pair<int,int>,int>pr={{1,2},2};
        cout << pr.first.second << endl;
    
    pair<pair<int,int>,pair<int,int>> ppr ={{1,2},{4,5}};
        cout << ppr.first.first << endl;//-->1
        cout << ppr.second.second << endl;//-->5

//pair of anyting-->
    vector<pair<int,int>>vec;
    set<pair<int,int>>st;
    map<pair<int,int>, int >mp;
}