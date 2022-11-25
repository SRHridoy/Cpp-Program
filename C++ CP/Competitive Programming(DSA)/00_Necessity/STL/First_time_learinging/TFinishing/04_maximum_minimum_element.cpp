#include<bits/stdc++.h>
using namespace std;

int main ()
{
//If  I want to find the maximum elements in any index range i to j give me the maximum -->
    // int a[5] = {1,5,8,9,10};
    // int i,j;
    // cin >> i >> j;

    // int maxi = INT_MIN;
    // for (int k = i; k <= j; k++)
    // {
    //     if(a[k]>maxi)
    //         maxi = a[k];
    // }
    // cout << maxi;

//instead of doing this we can use-->

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    //for maximum element-->
    int maxi = *max_element(arr,arr+5);
    cout << maxi << endl;

    //for minimum element-->
    int mini = *min_element(arr,arr+5);
    cout << mini << endl;

    vector<int>v(5,0);
    for (int i = 0; i < n; i++) cin >> v[i];
    int maxV = *max_element(v.begin(),v.end());
    int minV = *min_element(v.begin(),v.end());
    

}