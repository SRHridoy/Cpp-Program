#include<bits/stdc++.h>
using namespace std;
int main()
{
/*print all permutation--> 
    1-->string can be anything so first we have to sort it
    2-->then send it into loop...
*/

    string s = "bca";
    sort(s.begin(),s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(),s.end()));
    


    return 0;
}