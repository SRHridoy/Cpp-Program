#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int num;
    cin >> num;

    if((num%2==0) && (num%3==0))
        cout << num << endl;
        
    return 0;
}