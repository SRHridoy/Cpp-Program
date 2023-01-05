#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int array[] = {1,2,1,2,1,2};

    int ansSum = 0;
    for (int i = 0; i < 6; i++)
    {
        if(i%2==0)
            ansSum+=array[i];
        else
            ansSum-=array[i];
    }
    cout << ansSum << nl;
    


    return 0;
}