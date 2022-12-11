#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    int cntXina = 0;
    int cntXinb = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'X')
            cntXina++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == 'X')
            cntXinb++;
    }
    // cout << a[a.size()-1] << endl;

    if ((a[a.size() - 1] == b[b.size() - 1]) && (a[a.size() - 1] == 'S') && (cntXina > cntXinb))
        cout << "<" << endl;
    else if ((a[a.size() - 1] == b[b.size() - 1]) && (a[a.size() - 1] == 'S') && (cntXina < cntXinb))
        cout << ">" << endl;
    else if ((a[a.size() - 1] == b[b.size() - 1]) && (a[a.size() - 1] == 'S') && (cntXina == cntXinb))
        cout << "=" << endl;
    else if ((a[a.size() - 1] == b[b.size() - 1]) && (a[a.size() - 1] == 'L') && (cntXina > cntXinb))
        cout << ">" << endl;
    else if ((a[a.size() - 1] == b[b.size() - 1]) && (a[a.size() - 1] == 'L') && (cntXina < cntXinb))
        cout << "<" << endl;
    else if ((a[a.size() - 1] == b[b.size() - 1]) && (a[a.size() - 1] == 'L') && (cntXina == cntXinb))
        cout << "=" << endl;
    else if (a[a.size() - 1] == 'L' && b[b.size() - 1] == 'M')
        cout << ">" << endl;
    else if (a[a.size() - 1] == 'M' && b[b.size() - 1] == 'L')
        cout << "<" << endl;
    else if (a[a.size() - 1] == 'S' && b[b.size() - 1] == 'M')
        cout << "<" << endl;
    else if (a[a.size() - 1] == 'M' && b[b.size() - 1] == 'S')
        cout << ">" << endl;
    else if(a[a.size() - 1] == 'M' && b[b.size() - 1] == 'M')
        cout << "=" << endl;
    else if(a[a.size() - 1] == 'S' && b[b.size() - 1] == 'L')
        cout << "<" << endl;
    else if(a[a.size() - 1] == 'L' && b[b.size() - 1] == 'S')
        cout << ">" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

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