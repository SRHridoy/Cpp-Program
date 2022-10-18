#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p,v,t,count = 0;
    // for (int i = 0; i < n; i++)
    while(n--)
    {
        cin >> p >> v >> t;
        // if ((p == 1 && v == 1) || (p == 1 && t == 1) || (t == 1 && v == 1) || (p == 1 && v == 1 && t == 1) )
        if((p+v+t)>=2)
            count++;
        
    }
    cout << count;
    

    return 0;
}