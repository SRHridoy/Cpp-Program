#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int array[] = {1,2,3,4};
    int size = sizeof(array)/sizeof(array[0]);

    //for loop:
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << nl;
    }

    //for each loop:
    for(int element:array)
    {
        cout << element << endl;
    }

    //while loop:
    int index = 0;
    while (index<size)
    {
        cout << array[index] << nl;
    }
    


    return 0;
}