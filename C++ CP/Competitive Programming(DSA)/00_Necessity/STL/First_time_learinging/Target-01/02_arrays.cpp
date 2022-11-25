#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

//array<int,5>arrGlobal;//-->this is automatically initialized to all 0's.
int32_t main()
{
    //array<int,5>arrLocal;//-->this is initiallized whith garbase.

    // array<int,5>arr = {3,4,5};//-->others are initialized with 0's. that's why we use {0} for all 0's but {1} doesn't work for 1's it also work for first 1 then all zeros...

//for initializing all with anoter number we can use fill
    array<int,5>arr;
    arr.fill(10);//-->{10,10,10,10,10}

//printing with arr.at(index)-->
    for (int i = 0; i < 5; i++)
    {
        cout << arr.at(i) << " " << endl;
    }

//Iterator-->
//begin(),end(),rbegin(),rend()
    array<int, 5> a = {1,3,4,5,6};
    for(auto it = a.begin(); it!=a.end();it++)
        cout << *it << " ";
    cout << endl;
//Reversing-->
    for(auto it = a.rbegin(); it!=a.rend();it++)
        cout << *it << " ";
    cout << endl;

//Use for each loop-->
    for(auto it:a)
        cout << it << " ";
    cout << endl;

    string s = "shfshdhfhd";
    for(auto it:s)
        cout << it;
    cout << endl;

//size-->
    cout << a.size() << endl;
//front-->
    cout << a.front() << endl;//a.at(0)
//back-->
    cout << a.back() << endl;//a.at(a.size() - 1)

}