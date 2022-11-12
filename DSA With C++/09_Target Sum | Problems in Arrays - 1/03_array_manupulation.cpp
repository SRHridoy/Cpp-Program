//Find the unique number in a given array where all the elements are being repeated twice with one value being unique.

#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int array[] = {2,3,1,3,2,4,4,5,1};
    int size = 9;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(array[i] == array[j])
                array[i] = array[j] = -1;
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        if(array[i] > 0)
        cout << array[i] << nl;
    }
    
    


    return 0;
}