#include<bits/stdc++.h>
using namespace std;

int main ()
{
//ALGORITHMS-->
    //reversing-->array,vector -->takes nlogn...
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
//reverse(start iteratr,end iterator)-->[)
    reverse(arr,arr+n);
    reverse(arr+1, arr+4);

    vector<int>v(5,0);
    for (int i = 0; i < n; i++) cin >> v[i];
    reverse(v.begin(),v.end());//[)
    reverse(v.begin()+1,v.end()+4);
}

