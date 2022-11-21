#include<bits/stdc++.h>
using namespace std;

int main()
{
/*tell the occurances of the element 1 in the array-->
                                            arr[] = {1,6,7,1,2,1,3};
                                            x = 1;
                                            output-->3
*/
    int arr[] = {1,6,7,1,2,1,3};
    int x = 1;
    // int cnt = 0;
    // for (int i = 0; i < 7; i++)
    //     if(arr[i] == x)
    //         cnt++;
    // cout << cnt << endl;

//Instead of these we can use count(firstPointer, lastPointer,x)-->
    int cnt = count(arr,arr+7,1);
    cout << cnt << endl;

//For vector-->
    vector<int>v(5,0);
    for (int i = 0; i < v.size(); i++) 
        cin >> v[i];

    int cntV = count(v.begin(),v.end(),1);
    cout << cntV << endl;
}