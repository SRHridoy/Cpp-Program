#include<bits/stdc++.h>
using namespace std;
int main()
{
/*Find the last occurence of x in an arr-->
    arr[] --> {1,5,7,7,8,10,10,10,11,11,12}
    index-->   0 1 2 3 4 5  6  7  8  9  10 

    x = 10, ans --> 3;
    x = 7, ans --> 2;
*/
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int xA = 10;
    sort(arr,arr+n);//sorted first because lb & ub works on sorted...
    int indexL = lower_bound(arr,arr+n,xA) - arr;
    int indexU = upper_bound(arr,arr+n,xA) - arr;
    int occurences = indexU - indexL;
    cout << occurences << endl;
    return 0;
}