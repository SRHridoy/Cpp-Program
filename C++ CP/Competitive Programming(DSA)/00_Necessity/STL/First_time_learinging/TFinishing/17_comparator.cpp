#include<bits/stdc++.h>
using namespace std;
//Comparator-->
    // bool com(int el1,int el2)
    // {
    //     if(el1>=el2)
    //         return true;
    //     else
    //         return false;
    // }
int main()
{
/*sort in descending-->Comparator
    first of all we have to consider two elements-->
                        01.first element.
                        02.second element.
                        if element one is before element 2 return true
                        else false...
*/
/*
pair<int,int>arr[] = {{1,4},{5,2},{5,9}};
    after sorting-->{{1,4},{5,9},{5,2}};
need to sort this in such a way that the element who have first element in pair smaller appear first, and if first is equal then sort accoding to second and keep the larger second...
*/

    // pair<int,int>arr[] = {{1,4},{5,2},{5,9}};

    // pair<int,int>el1;
    // pair<int,int>el2;
    // bool comp(pair<int,int>el1, pair<int,int>el2)
    // {
    //     if(el1.first < el2.first)                    ERROR
    //         return true;
    //     //if(el1.first == el2.fist)

    //     if(el1.first == el2.first)
    //         if(el1.second > el2.second)
    //             return true;
    //     return false;
    // }

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
//for descending there are couple of ways -->

//01-->
    sort(arr,arr+n,greater<int>());

//02-->
    
    // sort(arr,arr+n,comp());-->error...

    return 0;
}