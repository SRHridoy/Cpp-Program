//Rotate the given array 'a' by k steps, where k is non-negative. Note: k can be greater than n as well where n is the size of array 'a'.

#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    int array[]={1,2,3,4,5};
    int n = 5;
    int k = 3;

    //k can be greater than n-->
    k%=n;

    int rotatedArray[n];
    int j = 0;

    //inserting last k elements in rotated array-->
    for(int i = n-k; i < n; i++)
        rotatedArray[j++] = array[i];

    //inserting first n-k elements in rotatad array-->
    for(int i = 0; i <= k; i++)
        rotatedArray[j++] = array[i];

    //printing rotated array-->
    for (int i = 0; i < n; i++)
        cout << rotatedArray[i] << " ";
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}