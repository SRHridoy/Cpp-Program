#include<bits/stdc++.h>
using namespace std;

int main()
{
//You are given a range and you need to find the sum in that range(i-j)...
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
//calculating sum -->
    // int sum = 0;
    // int i,j;
    // cin >> i >> j;
    // for (int k = 0; k < j; k++) sum+=arr[k]; 
    // cout << sum << endl;

//Instead of these code we can use accumulate(firstPointer,endPointer,initaialSum)-->

    int sum = accumulate(arr,arr+n,0);
    cout << sum << endl;

//in vector-->
    vector<int>v(5,0);
    for (int i = 0; i < n; i++) cin >> v[i];
    int sumV = accumulate(v.begin(),v.end(),0);
    cout << sumV << endl;
}