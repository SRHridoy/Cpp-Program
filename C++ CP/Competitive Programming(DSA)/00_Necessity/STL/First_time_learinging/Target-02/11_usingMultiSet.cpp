//          ***Md Sohanur Rahman Hridoy*** ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include<bits/stdc++.h>
#define int               long long
#define pb                emplace_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;
/*given N elements, print all elements in sorted order

input :
        6
        6 6 3 2 3 5
output :
        2 3 3 5 6 6
*/
void solve()
{
    int n;
    cin >> n;
    multiset<int>ms;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        ms.emplace(in);
    }
    for(auto it:ms)
        cout << it << " ";
    cout << endl;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}