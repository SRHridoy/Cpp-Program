#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a = 5;
    cout << sizeof(a) << endl;//4

    char name = 'a';
    cout << sizeof(name) << endl; //1

    bool flag;
    a==name? flag = true: flag =false;
    cout << flag << endl;//0

    cout << (&a) << endl;

    return 0;
}