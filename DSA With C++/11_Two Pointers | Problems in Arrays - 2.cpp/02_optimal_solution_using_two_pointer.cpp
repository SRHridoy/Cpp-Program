// Sort an Array consisting of only 0s and 1s.

#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void sortZerosAndOnes(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }

        if (v[left_ptr] == 0)
            left_ptr++;
        if (v[right_ptr] == 1)
            right_ptr--;
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
        v.push_back(ele);
    }

    sortZerosAndOnes(v);

    for (auto it : v)
        cout << it << " ";
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