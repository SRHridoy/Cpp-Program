#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int array[] = {3,9,18,11,7};
    int key = 11;

    int ans = -1;
    for (int i = 0; i < 5; i++)
    {
        if(array[i] == key)
        {
            ans = i;
            break;
        }
    }
    
    cout << ans << nl;

    return 0;
}