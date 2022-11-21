#include<bits/stdc++.h>
using namespace std;

int main ()
{
//ALGORITHMS-->
    //sorting-->array,vector -->takes nlogn...
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);//-->in increasing order
//sort from 1 to 3-->
    sort(arr+1, arr+4);

    vector<int>v(5,0);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());//[)

/*
vec-->{1, 6, 2, 7, 4}
        0  1  2   3  4
sort it so that only indices from 1 to 3
final vec-->{1, 2, 6, 7, 4}
*/
    sort(v.begin()+1,v.begin()+4);//[1,4)

}