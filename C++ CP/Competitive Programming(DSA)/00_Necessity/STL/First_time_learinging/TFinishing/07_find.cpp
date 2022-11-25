#include<bits/stdc++.h>
using namespace std;

int main ()
{
//arr[] --> {1,2,5,1,2,4,4}
//you need to find the first occurence of 2
    int arr[] = {1,2,5,1,2,4,4};
    int x = 2;

    // int index = -1;
    // for (int i = 0; i < 7; i++)
    // {
    //     if(arr[i]==x)
    //     {
    //         index = i;
    //         break;
    //     }
    // }
    // cout << index << endl;

//Instead of these we can use-->
//these will return an iterator pointing to the first instance of it ,ot else it returns pointing to the end() if it is not there...
    auto address = find(arr,arr+7,2);
    int index = address - arr;
    cout << index << endl; 

//In vector-->

    vector<int>v(5,0);
    for (int i = 0; i < v.size(); i++) 
        cin >> v[i];
    auto addressV = find(v.begin(),v.end
    (),5);
    // int indexV = addressV - v.begin();
    // cout << indexV << endl;

    if(addressV == v.end())
        cout << "Element not found" << endl;
    else
        cout << "Element is first found at: " << addressV - v.begin() << endl;


    

}