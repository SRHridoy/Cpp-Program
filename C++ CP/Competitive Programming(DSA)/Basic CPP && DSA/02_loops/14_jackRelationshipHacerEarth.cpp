#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define ld long double;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            for (int  j = 1; j <= i ; j++)
                cout << "*";
            for(int k = 1; k <=2*n-2*i;k++)
                cout << "#";
            for (int l = 1; l <= i ; l++)
                cout << "*";
            
            cout << endl;
        }
        
    }
    


    return 0;
}