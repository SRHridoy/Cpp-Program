// Given an integer array 'a' sorted in non-decreasing order,return an array of the squares of each number sorted in non-decreasing order.

#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define pb push_back
using namespace std;

void sortedSquaredArray(vector<int> &v)
{
    vector<int> ans;

    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while (left_ptr <= right_ptr)
    {
        if (abs(v[left_ptr]) < abs(v[right_ptr]))
        {
            ans.pb(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        }
        else
        {
            ans.pb(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
    }

    reverse(ans.begin(), ans.end());

    for (auto it : ans)
        cout << it << " ";
    cout << endl;

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

    sortedSquaredArray(v);
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