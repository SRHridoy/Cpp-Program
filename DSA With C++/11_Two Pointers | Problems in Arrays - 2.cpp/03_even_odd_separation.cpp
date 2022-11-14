// Given an array of integers 'a', move all the even integers at the beginning of the array followed by all the odd integers.The relative order of odd or even integers does not matter.Return any array that statisfies the condition...

#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define pb push_back
using namespace std;

void evenThenOdd(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] % 2 != 0 && v[right_ptr] % 2 == 0)
        {
            // int temp;
            // temp = v[left_ptr];
            // v[left_ptr] = v[right_ptr];
            // v[right_ptr] = temp;

            // left_ptr++;
            // right_ptr--;
            swap(v[left_ptr++], v[right_ptr--]);
        }
        
        if (v[left_ptr] % 2 == 0)
            left_ptr++;

        if (v[right_ptr] % 2 != 0)
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
        v.pb(ele);
    }

    evenThenOdd(v);

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