#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
//printing using for loop-->
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << nl;

    v.insert(v.begin()+2,6);                                        
//printing using for each loop-->
    for(auto element:v)
        cout << element << " ";
    cout << nl;

    v.erase(v.end()-2);
//printing using while loop-->
    int index = 0;
    while(index<v.size())
        cout << v[index++] << " ";

    return 0;
}