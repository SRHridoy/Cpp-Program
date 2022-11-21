#include<bits/stdc++.h>
using namespace std;

int main()
{
/*
        arr[1,5,7,7,8,10,10,11,11,12]
    index-->0 1 2 3 4 5 6 7 8 9 10 11
    find x = 7-->2
    find x = 6-->doesn't exit...
*/
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int x = 7;

//1st approch--> 2log N
    if(binary_search(arr,arr+n,x)==true)
        cout << lower_bound(arr,arr+n,x) - arr;
    else
        cout << "Doesn't exit";

//Good approch-->logN
    int index = lower_bound(arr,arr+n,x)-arr;
    if(index != n&&arr[index] == x)
        cout << "Found at: " << index << endl;
    else    
        cout << "Not found" << endl;


}