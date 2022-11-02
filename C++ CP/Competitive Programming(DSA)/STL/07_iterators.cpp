#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    vector<int> v = {2,3,5,6,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //Iterators-->
    vector <int> ::iterator it = v.begin();
    // cout << (*it) << endl;
    // cout << (*(it+1)) << endl;
    for(it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << endl;
    }
    


    return 0;
}