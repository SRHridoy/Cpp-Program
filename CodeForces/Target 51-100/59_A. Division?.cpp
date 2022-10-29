#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int r;
    while (t--)
    {
        cin >> r;
        if (r>=1900)
            cout << "Division 1" << endl;
        else if(r>= 1600 && r <= 1899)
            cout << "Division 2" << endl;
        else if(r>= 1400 && r <= 1599)
            cout << "Division 3" << endl;
        else
            cout << "Division 4" << endl;
        
    }
    

    return 0;
}