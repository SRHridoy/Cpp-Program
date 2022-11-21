#include<bits/stdc++.h>
using namespace std;
int main()
{
/*Binary search-->long n
    this stl only works on SORTED arrays.
    arr[]-->{1,5,7,9,10}
    x = 9
    -->true -->9 exits in my arr
    x = 8
    -->flase -->8 doesn't exist in my arr
*/

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
//Binary_search(firstIterator,lastIterator,x)
//returns a true or returns a false...
    bool as = binary_search(arr,arr+n,9);
    cout << as << endl;

//For vector-->
    vector<int>v(5,0);
    for (int i = 0; i < n; i++) cin >> v[i];
    bool vs = binary_search(v.begin(),v.end(),9);
    cout << vs << endl;


}