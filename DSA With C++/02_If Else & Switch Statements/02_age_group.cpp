#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int age;
    cin >> age;

    if(age<12)
        cout << "Child" << endl;
    else if(age>18)
        cout << "Adult" << endl;
    else
        cout << "Teenager" << endl;


    return 0;
}