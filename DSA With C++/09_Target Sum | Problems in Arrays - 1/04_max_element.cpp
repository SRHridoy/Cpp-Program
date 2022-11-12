// Find the second largest element in the given Array...

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int indexOfMax(int array[], int size)
{
    int max = INT_MIN;
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int array[] = {2, 3, 5, 7, 6, 1,7};
    int size = 7;
    int fstMaxIndex = indexOfMax(array, size);
   // array[fstMaxIndex] = -1;

    int max = array[fstMaxIndex];
    for (int i = 0; i < size; i++)
    {
        if(array[i] == max)
            array[i] = -1;
    }
    

    int scndMaxIndex = indexOfMax(array, size);
    cout << array[scndMaxIndex] << nl;

    return 0;
}