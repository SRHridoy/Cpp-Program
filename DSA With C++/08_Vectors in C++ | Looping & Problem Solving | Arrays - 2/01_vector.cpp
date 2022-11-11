#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;

    cout << "Size: " << v.size() << nl << "Capacity: " << v.capacity() << nl;

    v.push_back(1);
    cout << "Size: " << v.size() << nl << "Capacity: " << v.capacity() << nl;

    v.push_back(2);
    cout << "Size: " << v.size() << nl << "Capacity: " << v.capacity() << nl;

    v.push_back(3);
    cout << "Size: " << v.size() << nl << "Capacity: " << v.capacity() << nl;

    v.resize(5);
    cout << "Size: " << v.size() << nl << "Capacity: " << v.capacity() << nl;

    v.resize(10);
    cout << "Size: " << v.size() << nl << "Capacity: " << v.capacity() << nl;

    v.pop_back();
    v.pop_back();
    cout << "Size: " << v.size() << nl << "Capacity: " << v.capacity() << nl;

    return 0;
}