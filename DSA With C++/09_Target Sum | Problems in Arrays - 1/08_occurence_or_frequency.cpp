// Given Q queries, check if the given number is present in the array or not..Note--> Value of all the elements in the array is less than 10 to the power 5...

#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    // taking input array-->
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // making frequency array-->
    const int N = 1e5 + 10;
    vector<int> freq(N, 0);
    for (int i = 0; i < n; i++)
        freq[v[i]]++;

    // taking queies from user-->
    cout << "Enter queries: ";
    int q;
    cin >> q;

    while (q--)
    {
        int queryElement;
        cin >> queryElement;
        cout << queryElement << "'s frequency-->" << freq[queryElement] << endl;
    }
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

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