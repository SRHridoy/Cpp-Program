#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define ld long double;
using namespace std;

int cntDiv(int n)
{
    int cnt = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if (n%i==0)
        {
            cnt++;
            if (i!=n/i)
            {
                cnt++;
            }
            
        }
    }
    return cnt;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << cntDiv(i) << endl;
    }
    


    return 0;
}