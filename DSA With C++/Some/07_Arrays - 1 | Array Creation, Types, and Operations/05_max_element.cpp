#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int array[5] = {2,4,5,2,200};
    int size = sizeof(array)/sizeof(array[0]);

    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if(array[i]  > max)
            max = array[i];
    }
    cout << max << nl;


    return 0;
}