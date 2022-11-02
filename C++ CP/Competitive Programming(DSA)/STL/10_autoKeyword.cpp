#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v = {1, 2, 3, 45, 6, 77};
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // pair of vector printing-->
    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {8, 9}};
    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }

    return 0;
}