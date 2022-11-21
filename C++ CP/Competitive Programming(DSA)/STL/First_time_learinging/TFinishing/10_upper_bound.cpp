#include<bits/stdc++.h>
using namespace std;

int main()
{
/*
upper_bound function-->Works on sorted...log N
    returns an iterator pointing to the first element which is just greater than x...

Examaple-->
        arr[1,5,7,7,8,10,10,11,11,12]
    index-->0 1 2 3 4 5 6 7 8 9 10 11
        x = 7-->4
        x = 6-->2
        x = 12-->end location...
*/

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int xa = 10;

    auto lba = upper_bound(arr,arr+n,xa);
    int indexA = lba - arr;
    cout << indexA << endl;

    vector<int>v(5,0);
    for (int i = 0; i < n; i++) cin >> v[i];
    int xv = 5;
    
    auto lbv = upper_bound(v.begin(),v.end(),xv);
    int indexV = lbv - v.begin();
    cout << indexV << endl;

}