#include<bits/stdc++.h>
using namespace std;
int main()
{
/*Find the last occurence of x in an arr-->
    arr[] --> {1,5,7,7,8,10,10,10,11,11,12}
    index-->   0 1 2 3 4 5  6  7  8  9  10 

    last occurence of x = 10, ans = 7th index
    edge_case:01-->last occurence of x = 6, ans = doesn't exit
    edge_case:02-->last occurence of x = 0, ans = doesn't exit...
*/
//in array-->
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int xA = 10;
    int indexA = upper_bound(arr,arr+n,xA) - arr;
    //we need to check because of edge_case:01-->
    indexA-=1;
    if(arr[indexA]==xA && indexA>=0)
        cout <<"Last occurence at: " << indexA << endl;
    else
        cout << "Doesn't exit" << endl;
    return 0;
}