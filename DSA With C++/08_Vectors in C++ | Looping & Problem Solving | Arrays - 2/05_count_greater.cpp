#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    vector<int>v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    
    cout << "Enter x: ";
    int x;
    cin >> x;

    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > x)
            count++;
    }
    
    cout << count << nl;

    return 0;
}