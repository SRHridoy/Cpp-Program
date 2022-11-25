#include<bits/stdc++.h>
using namespace std;
int main()
{
//Same as next...
    string s;
    cin >> s;
    bool permu = prev_permutation(s.begin(),s.end());
    cout << permu << endl;
    cout << s << endl;

    return 0;
}