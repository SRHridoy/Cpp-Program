#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin >> n;
    
    int f,s;
    while(n--)
    {
        cin >>f >>s;
        if (f!=s)
        {
            cout <<"Happy Alex";
            return 0;
        }
        
    }
    cout << "Poor Alex";

    return 0;
}