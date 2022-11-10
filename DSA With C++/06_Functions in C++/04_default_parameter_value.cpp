#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int add(int a, int b = 1, int c = 2)
{
    return a + b + c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << add(2) << nl;
    cout << add(2, 2) << nl;
    cout << add(2, 2, 3) << nl;

    return 0;
}