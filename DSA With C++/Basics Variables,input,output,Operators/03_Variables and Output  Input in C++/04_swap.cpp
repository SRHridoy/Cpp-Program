#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a,b;
    cout <<"a:" << endl;
    cin >>a;
    cout <<"b:" << endl;
    cin >>b;

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    return 0;
}