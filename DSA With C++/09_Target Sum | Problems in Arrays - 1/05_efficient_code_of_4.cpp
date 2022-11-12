// Find the second largest element in the given Array...
#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int secondMax(int array[], int size)
{
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    // Finding first max-->
    for (int i = 0; i < size; i++)
    {
        if (array[i] > firstMax)
            firstMax = array[i];
    }
    // Finding second max-->
    for (int i = 0; i < size; i++)
    {
        if ((array[i] > secondMax) && (array[i] != firstMax))
            secondMax = array[i];
    }
    return secondMax;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int array[] = {2, 3, 4, 5, 8, 7, 4, 8, 9, 1, 9};
    int size = 11;

    int secMax = secondMax(array, size);
    cout << secMax << nl;
    return 0;
}