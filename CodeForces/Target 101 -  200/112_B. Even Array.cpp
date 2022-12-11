#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define pb push_back
using namespace std;

int evenAndOdd(vector<int> &v)
{
    int cnt_even = 0;
    int cnt_odd = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
            cnt_even++;
        else
            cnt_odd++;
    }

    if (v.size() == 1 && v[0] % 2 == 0)
        return 0;
    else if (v.size() == 1 && v[0] % 2 != 0)
        return -1;

    int cnt_vulEven = 0;
    for (int i = 0; i < v.size(); i += 2)
    {
        if (v[i] % 2 != 0)
            cnt_vulEven++;
    }

    int cnt_vulOdd = 0;
    for (int i = 1; i < v.size(); i += 2)
    {
        if (v[i] % 2 == 0)
            cnt_vulOdd++;
    }

    // cout << "VulEven--> " << cnt_vulEven << endl;
    // cout << "VulOdd--> " << cnt_vulOdd << endl;

    if ((cnt_vulEven == 0 && cnt_vulOdd != 0) || (cnt_vulEven != 0 && cnt_vulOdd == 0) || (cnt_vulEven > cnt_vulOdd) || (cnt_even > cnt_odd + 1))
        return -1;

    int ans = min(cnt_vulEven, cnt_vulOdd);

    return ans;
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

    cout << evenAndOdd(v) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // t = 1;
    // int cs = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case-#" << cs <<": ";
        solve();
        // cs++;
    }
}
