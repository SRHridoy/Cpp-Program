#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int array[] = {1,2,3,4,5,6};

    bool sortedFlag = true;
    for (int i = 1; i < 6; i++)
    {
        if(array[i]<array[i-1])
            sortedFlag = false;
    }
    cout << sortedFlag << nl;
    


    return 0;
}