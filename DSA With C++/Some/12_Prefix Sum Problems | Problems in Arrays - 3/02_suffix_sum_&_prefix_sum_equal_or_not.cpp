// Check if we can partition the array into two subarrays with equal sum.More formally,check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.

#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define pb push_back
using namespace std;

bool checkPrefixSuffixSum(vector<int> &v)
{
    // calculating total sum-->
    int total_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        total_sum += v[i];
    }

    // calculating prefix sum & suffix sum && comparing-->
    int prefix_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;

        if (suffix_sum == prefix_sum)
            return true;
    }
    return false;
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

    cout << checkPrefixSuffixSum(v) << endl;
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