#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

/* -----------SIZE OF OPERATOR---------- */
    int a = 5;
    cout << sizeof(a) << endl;//4

    char name = 'a';
    cout << sizeof(name) << endl; //1
/* ----------TERNARY OPERATOR---------- */
    bool flag;
    a==name? flag = true: flag =false;
    cout << flag << endl;//0
/* ----------ADDRESS OPERATOR---------- */
    cout << (&a) << endl;
/* ----------CASTING OPERATOR---------- */
    float b = 3.45;
    b = int(b);
    cout << b << endl;
/* ----------POINTER OPERATOR---------- */
    //used in class ,pointer,structure...
/* ----------COMMA OPERATOR---------- */
    int a,b,c;

    return 0;
}