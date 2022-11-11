#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    set<char> s;
    char c;

    while (cin >> c)
    {
        if (c != '{' && c != '}' && c != ',')
            s.insert(c);
    }
    
    cout << s.size();

    return 0;
}