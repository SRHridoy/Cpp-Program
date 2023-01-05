#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int array[] = {1, 2, 3, 4};
    cout << sizeof(array) << nl;
    cout << sizeof(array) / sizeof(array[0]) << nl;

    int array2[4];
    cout << array2[0] << nl;
    cout << array2[1] << nl;
    cout << array2[2] << nl;
    cout << array2[3] << nl;

    return 0;
}