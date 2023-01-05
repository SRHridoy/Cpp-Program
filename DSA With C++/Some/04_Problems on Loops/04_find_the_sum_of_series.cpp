#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;
// s = 1-2+3-4...n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i<=n;i++)
    {
        if (i%2==0)
            sum-=i;
        else
            sum+=i;
        
    }
    cout << sum;
    


    return 0;
}