#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    //Vector Printing-->
    vector<int> v = {2,3,4,5,6};
    for(int &value : v)
    {
        //we use reference so value will be updated...
        value++;
    }
    for(int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    //pair of vector printing-->
    vector<pair<int,int>> v_p = {{1,2},{3,4},{8,9}};
    for(pair<int,int> &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }


    return 0;
}