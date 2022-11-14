// Given an integers array 'a',return the prefix sum/running sum in the same array without creating a new array.

#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define pb push_back
using namespace std;

void prefixSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
    return;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.pb(ele);
    }
    prefixSum(v);

    for (auto ele : v)
        cout << ele << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    // int cs = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case-#" << cs <<": ";
        solve();
        // cs++;
    }
}