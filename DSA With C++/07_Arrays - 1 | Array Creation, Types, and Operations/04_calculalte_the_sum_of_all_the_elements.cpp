#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int array[] = {3,4,10,11};
    int size = sizeof(array)/sizeof(array[0]);

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+=array[i];
    }
    
    cout << sum << nl;


    return 0;
}