#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    // int a,b;
/*     a<<b;-->a*2^b */
/*     a>>b;-->a/2^b */
    // a = ~(101);
    // a=a|b;
    // b=a&b;

    int num1 = 5;//0101
    
    cout << (num1<<1) << endl;//10
    cout << num1 << endl;//5
    cout << (num1>>1) << endl;//2

    int num2 = 8;//1000
    cout << (num1&num2) << endl;//0
    cout << (num1|num2) << endl;//1101 = 13
    cout << (num1^num2) << endl;//1101 = 13
    
    



    return 0;
}