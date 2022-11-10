#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cout << (4+3+"Coder") << endl;//Expected 7Coder
    cout << ("Coder"+0+0+7) << endl;//Expected Coder007

    int p = 10,q = 9,r = 8, s= 7;
    s = p-++r-++q;//(10-(++8)-(++9) = -9)
    cout << s << endl;

    bool a = false;
    bool b = false;
    bool c = true;

    cout << (a==b==c) << endl;


    return 0;
}