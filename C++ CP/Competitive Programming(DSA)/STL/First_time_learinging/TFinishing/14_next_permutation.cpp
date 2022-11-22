#include<bits/stdc++.h>
using namespace std;
int main()
{
/*Next Permutation-->it can be string, int, char anything...lexographically next...O(N)
    string s = "abc"
    all permutations are as follows:
    1-->abc
    2-->acb
    3-->bac
    4-->bca
    5-->cab
    6-->cba...   
if cba then permu = 0 and updated to abc...
*/
    string s;
    cin >> s;
    bool permu = next_permutation(s.begin(),s.end());
    cout << permu << endl;//that's return true value...
    cout << s << endl;//it will updated to next_permutation...
    return 0;
}