#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;

    int reminder = 0, count = 0;
    while (n)
    {
        reminder = n % 10;
        n/=10;
        if (reminder == 4 || reminder == 7)
        {
            count++;
        }
        
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    
    
    return 0;
}